#include <glTraceCommon.h>
#include <generated.h>

#define glDepthFunc_wrp						\
    ((void  (*)(GLenum func                                        \
    ))GL_ENTRY_PTR(glDepthFunc_Idx))


GLAPI void  APIENTRY glDepthFunc(GLenum func)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthFunc_Idx))
	{
            GL_ENTRY_PTR(glDepthFunc_Idx) = dlsym(RTLD_NEXT,"glDepthFunc");
            if(!GL_ENTRY_PTR(glDepthFunc_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthFunc_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthFunc_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthFunc_wrp(func);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthFunc_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthFunc_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthFunc_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthFunc_Idx),
				 GL_ENTRY_LAST_TS(glDepthFunc_Idx));
        if(last_diff > 1000000000){
            printf("glDepthFunc %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthFunc_Idx),
	             GL_ENTRY_CALL_TIME(glDepthFunc_Idx),
	             GL_ENTRY_CALL_TIME(glDepthFunc_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthFunc_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthFunc_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthFunc_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthFunc_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthFunc_Idx) = get_ts();
        }


	

}