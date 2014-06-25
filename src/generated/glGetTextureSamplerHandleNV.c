#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureSamplerHandleNV_wrp						\
    ((GLuint64  (*)(GLuint texture,GLuint sampler                                        \
    ))GL_ENTRY_PTR(glGetTextureSamplerHandleNV_Idx))


GLAPI GLuint64  APIENTRY glGetTextureSamplerHandleNV(GLuint texture,GLuint sampler)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureSamplerHandleNV_Idx))
	{
            GL_ENTRY_PTR(glGetTextureSamplerHandleNV_Idx) = dlsym(RTLD_NEXT,"glGetTextureSamplerHandleNV");
            if(!GL_ENTRY_PTR(glGetTextureSamplerHandleNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureSamplerHandleNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureSamplerHandleNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint64  retval = glGetTextureSamplerHandleNV_wrp(texture,sampler);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureSamplerHandleNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureSamplerHandleNV_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureSamplerHandleNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureSamplerHandleNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureSamplerHandleNV_Idx) = get_ts();
        }


	return retval;

}