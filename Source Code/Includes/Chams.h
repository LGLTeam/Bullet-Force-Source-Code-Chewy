-//
// Created by harak on 2020-11-28.
//

#ifndef DARK_FORCE_CHAMS_H
#define DARK_FORCE_CHAMS_H

#include <GLES2/gl2.h>
#include <dlfcn.h>
#include "Logger.h"
#include "Utils.h"


static void *handle;
static const char* shaderName;
static bool enableWallhack;

void setShader(const char* s) {
    shaderName = s;
}
const char* getShader() {
    return shaderName;
}

void SetWallhack(bool enable){
    enableWallhack = enable;
}

bool getWallhackEnabled(){
    return enableWallhack;
}

int (*old_glGetUniformLocation)(GLuint, const GLchar *);
GLint new_glGetUniformLocation(GLuint program, const GLchar *name) {
    //Log name to find used shaders.
    LOGI("New shader found: %s", name); // this is where LogShaders() would get into contact with this.
    return old_glGetUniformLocation(program, name);
}

bool isCurrentShader(const char *shader) {
    GLint currProgram;
    glGetIntegerv(GL_CURRENT_PROGRAM, &currProgram);
    return old_glGetUniformLocation(currProgram, shader) != -1;
}

void (*old_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void *indices);
void new_glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices) {
    old_glDrawElements(mode, count, type, indices);
    if (mode != GL_TRIANGLES || count < 300) return; {
        if (isCurrentShader(getShader())){
            if (getWallhackEnabled()) {
                glDepthRangef(1, 0.5);

                performRGBChange();
                glColorMask(red, green, blue, 1);
                glEnable(GL_BLEND);
                glBlendFunc(GL_SRC_COLOR, GL_ONE);

                old_glDrawElements(mode, count, type, indices);

                glDepthRangef(0.5, 1);

                glColorMask(1, 1, 1, 1);
                glDisable(GL_BLEND);

                /*
                glEnable(GL_CULL_FACE);
                glCullFace(GL_FRONT_AND_BACK);
                glEnable(GL_BLEND);
                glDepthFunc(GL_ALWAYS);
                glDepthMask(true);
                glBlendFunc(GL_CONSTANT_COLOR, GL_ONE);
                performRGBChange();
                glBlendColor(red, green, blue, 1);
                glEnable( GL_POLYGON_OFFSET_FILL);
                glPolygonOffset( -0.5f, -0.5f );
                glLineWidth( 1.0f );
                old_glDrawElements(GL_LINE_LOOP,count,type,indices);
                glDepthFunc(GL_LESS);
                glBlendFunc(GL_CONSTANT_COLOR, GL_ONE);
                glBlendColor(10.0f, 0.0f, 0.0F, 0.8f);

                glDisable( GL_POLYGON_OFFSET_FILL );
                old_glDrawElements(mode,count,type,indices);


                glDepthMask(true);
                glDepthFunc(GL_LESS);
                glDisable(GL_BLEND);
                */
            }
        }
    }
}

bool mlovinit(){ //need to call this in your hooks
    handle = NULL;
    handle = dlopen("libGLESv2.so", RTLD_LAZY);
    if(!handle){
        LOGE("Cannot open library: %s", dlerror());
        return false;
    }
    return true;
}

void LogShaders(){
    auto p_glGetUniformLocation = (const void*(*)(...))dlsym(handle, "glGetUniformLocation");
    const char *dlsym_error = dlerror();
    if(dlsym_error){
        LOGE("Cannot load symbol 'glGetUniformLocation': %s", dlsym_error);
        return;
    }else{
        octo_hook(reinterpret_cast<void*>(p_glGetUniformLocation), reinterpret_cast<void*>(new_glGetUniformLocation), reinterpret_cast<void**>(&old_glGetUniformLocation));
    }
}

void Wallhack(){
    auto p_glDrawElements = (const void*(*)(...))dlsym(handle, "glDrawElements");
    const char *dlsym_error = dlerror();
    if(dlsym_error){
        LOGE("Cannot load symbol 'glDrawElements': %s", dlsym_error);
        return;
    }else{
        octo_hook(reinterpret_cast<void*>(p_glDrawElements), reinterpret_cast<void*>(new_glDrawElements), reinterpret_cast<void**>(&old_glDrawElements));
    }
}

#endif //DARK_FORCE_CHAMS_H
