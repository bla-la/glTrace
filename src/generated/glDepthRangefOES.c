#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangefOES_wrp						\
    ((void  (*)(GLclampf n,GLclampf f                                        \
    ))GL_ENTRY_PTR(glDepthRangefOES_Idx))


GLAPI void  APIENTRY glDepthRangefOES(GLclampf n,GLclampf f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthRangefOES_Idx))
	{
            GL_ENTRY_PTR(glDepthRangefOES_Idx) = dlsym(RTLD_NEXT,"glDepthRangefOES");
            if(!GL_ENTRY_PTR(glDepthRangefOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthRangefOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangefOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangefOES_wrp(n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangefOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangefOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangefOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangefOES_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangefOES_Idx));
        if(last_diff > 1000000000){
            printf("glDepthRangefOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangefOES_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangefOES_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangefOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangefOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangefOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangefOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangefOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangefOES_Idx) = get_ts();
        }


	

}