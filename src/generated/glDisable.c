#include <glTraceCommon.h>
#include <generated.h>

#define glDisable_wrp						\
    ((void  (*)(GLenum cap                                        \
    ))GL_ENTRY_PTR(glDisable_Idx))


GLAPI void  APIENTRY glDisable(GLenum cap)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisable_Idx))
	{
            GL_ENTRY_PTR(glDisable_Idx) = dlsym(RTLD_NEXT,"glDisable");
            if(!GL_ENTRY_PTR(glDisable_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisable_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisable_wrp(cap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisable_Idx) ++;

        GL_ENTRY_LAST_TS(glDisable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisable_Idx),
				 GL_ENTRY_LAST_TS(glDisable_Idx));
        if(last_diff > 1000000000){
            printf("glDisable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisable_Idx),
	             GL_ENTRY_CALL_TIME(glDisable_Idx),
	             GL_ENTRY_CALL_TIME(glDisable_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisable_Idx) = get_ts();
        }


	

}