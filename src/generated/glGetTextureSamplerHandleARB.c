#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureSamplerHandleARB_wrp						\
    ((GLuint64  (*)(GLuint texture,GLuint sampler                                        \
    ))GL_ENTRY_PTR(glGetTextureSamplerHandleARB_Idx))


GLAPI GLuint64  APIENTRY glGetTextureSamplerHandleARB(GLuint texture,GLuint sampler)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureSamplerHandleARB_Idx))
	{
            GL_ENTRY_PTR(glGetTextureSamplerHandleARB_Idx) = dlsym(RTLD_NEXT,"glGetTextureSamplerHandleARB");
            if(!GL_ENTRY_PTR(glGetTextureSamplerHandleARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureSamplerHandleARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureSamplerHandleARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint64  retval = glGetTextureSamplerHandleARB_wrp(texture,sampler);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureSamplerHandleARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureSamplerHandleARB_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureSamplerHandleARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureSamplerHandleARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureSamplerHandleARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureSamplerHandleARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureSamplerHandleARB_Idx) = get_ts();
        }


	return retval;

}