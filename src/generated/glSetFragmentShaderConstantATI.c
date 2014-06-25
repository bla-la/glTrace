#include <glTraceCommon.h>
#include <generated.h>

#define glSetFragmentShaderConstantATI_wrp						\
    ((void  (*)(GLuint dst,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glSetFragmentShaderConstantATI_Idx))


GLAPI void  APIENTRY glSetFragmentShaderConstantATI(GLuint dst,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSetFragmentShaderConstantATI_Idx))
	{
            GL_ENTRY_PTR(glSetFragmentShaderConstantATI_Idx) = dlsym(RTLD_NEXT,"glSetFragmentShaderConstantATI");
            if(!GL_ENTRY_PTR(glSetFragmentShaderConstantATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSetFragmentShaderConstantATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glSetFragmentShaderConstantATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSetFragmentShaderConstantATI_wrp(dst,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSetFragmentShaderConstantATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSetFragmentShaderConstantATI_Idx) ++;

        GL_ENTRY_LAST_TS(glSetFragmentShaderConstantATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSetFragmentShaderConstantATI_Idx),
				 GL_ENTRY_LAST_TS(glSetFragmentShaderConstantATI_Idx));
        if(last_diff > 1000000000){
            printf("glSetFragmentShaderConstantATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSetFragmentShaderConstantATI_Idx),
	             GL_ENTRY_CALL_TIME(glSetFragmentShaderConstantATI_Idx),
	             GL_ENTRY_CALL_TIME(glSetFragmentShaderConstantATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glSetFragmentShaderConstantATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSetFragmentShaderConstantATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSetFragmentShaderConstantATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSetFragmentShaderConstantATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSetFragmentShaderConstantATI_Idx) = get_ts();
        }


	

}