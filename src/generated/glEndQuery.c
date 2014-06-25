#include <glTraceCommon.h>
#include <generated.h>

#define glEndQuery_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glEndQuery_Idx))


GLAPI void  APIENTRY glEndQuery(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEndQuery_Idx))
	{
            GL_ENTRY_PTR(glEndQuery_Idx) = dlsym(RTLD_NEXT,"glEndQuery");
            if(!GL_ENTRY_PTR(glEndQuery_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEndQuery_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndQuery_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndQuery_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndQuery_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndQuery_Idx) ++;

        GL_ENTRY_LAST_TS(glEndQuery_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndQuery_Idx),
				 GL_ENTRY_LAST_TS(glEndQuery_Idx));
        if(last_diff > 1000000000){
            printf("glEndQuery %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndQuery_Idx),
	             GL_ENTRY_CALL_TIME(glEndQuery_Idx),
	             GL_ENTRY_CALL_TIME(glEndQuery_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndQuery_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndQuery_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndQuery_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndQuery_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndQuery_Idx) = get_ts();
        }


	

}