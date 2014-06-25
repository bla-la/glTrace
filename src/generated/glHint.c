#include <glTraceCommon.h>
#include <generated.h>

#define glHint_wrp						\
    ((void  (*)(GLenum target,GLenum mode                                        \
    ))GL_ENTRY_PTR(glHint_Idx))


GLAPI void  APIENTRY glHint(GLenum target,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glHint_Idx))
	{
            GL_ENTRY_PTR(glHint_Idx) = dlsym(RTLD_NEXT,"glHint");
            if(!GL_ENTRY_PTR(glHint_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glHint_Idx))
    	{
            GL_ENTRY_PREV_TS(glHint_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glHint_wrp(target,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glHint_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glHint_Idx) ++;

        GL_ENTRY_LAST_TS(glHint_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glHint_Idx),
				 GL_ENTRY_LAST_TS(glHint_Idx));
        if(last_diff > 1000000000){
            printf("glHint %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glHint_Idx),
	             GL_ENTRY_CALL_TIME(glHint_Idx),
	             GL_ENTRY_CALL_TIME(glHint_Idx) /
	             GL_ENTRY_CALL_COUNT(glHint_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glHint_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glHint_Idx) = 0;
             GL_ENTRY_CALL_TIME(glHint_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glHint_Idx) = get_ts();
        }


	

}