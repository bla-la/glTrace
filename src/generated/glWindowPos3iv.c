#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3iv_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3iv_Idx))


GLAPI void  APIENTRY glWindowPos3iv(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3iv_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3iv_Idx) = dlsym(RTLD_NEXT,"glWindowPos3iv");
            if(!GL_ENTRY_PTR(glWindowPos3iv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3iv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3iv_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3iv_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3iv_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3iv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3iv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3iv_Idx) = get_ts();
        }


	

}