#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquation_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquation_Idx))


GLAPI void  APIENTRY glBlendEquation(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquation_Idx))
	{
            GL_ENTRY_PTR(glBlendEquation_Idx) = dlsym(RTLD_NEXT,"glBlendEquation");
            if(!GL_ENTRY_PTR(glBlendEquation_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquation_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquation_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquation_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquation_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquation_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquation_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquation_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquation_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquation_Idx) = get_ts();
        }


	

}