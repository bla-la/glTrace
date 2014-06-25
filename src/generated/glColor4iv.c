#include <glTraceCommon.h>
#include <generated.h>

#define glColor4iv_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glColor4iv_Idx))


GLAPI void  APIENTRY glColor4iv(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4iv_Idx))
	{
            GL_ENTRY_PTR(glColor4iv_Idx) = dlsym(RTLD_NEXT,"glColor4iv");
            if(!GL_ENTRY_PTR(glColor4iv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4iv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4iv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4iv_Idx),
				 GL_ENTRY_LAST_TS(glColor4iv_Idx));
        if(last_diff > 1000000000){
            printf("glColor4iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4iv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4iv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4iv_Idx) = get_ts();
        }


	

}