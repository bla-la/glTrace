#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysIndirect_wrp						\
    ((void  (*)(GLenum mode,const void *indirect                                        \
    ))GL_ENTRY_PTR(glDrawArraysIndirect_Idx))


GLAPI void  APIENTRY glDrawArraysIndirect(GLenum mode,const void *indirect)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawArraysIndirect_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysIndirect_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysIndirect_wrp(mode,indirect);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysIndirect_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysIndirect_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysIndirect_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysIndirect_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysIndirect_Idx));


        if(last_diff > 1000000000){
            printf("glDrawArraysIndirect %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysIndirect_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysIndirect_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysIndirect_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysIndirect_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysIndirect_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysIndirect_Idx) = get_ts();
        }


	

}