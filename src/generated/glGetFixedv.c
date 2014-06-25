#include <glTraceCommon.h>
#include <generated.h>

#define glGetFixedv_wrp						\
    ((void  (*)(GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetFixedv_Idx))


GLAPI void  APIENTRY glGetFixedv(GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFixedv_Idx))
	{
            GL_ENTRY_PTR(glGetFixedv_Idx) = dlsym(RTLD_NEXT,"glGetFixedv");
            if(!GL_ENTRY_PTR(glGetFixedv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFixedv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFixedv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFixedv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFixedv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFixedv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFixedv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFixedv_Idx),
				 GL_ENTRY_LAST_TS(glGetFixedv_Idx));
        if(last_diff > 1000000000){
            printf("glGetFixedv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFixedv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFixedv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFixedv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFixedv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFixedv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFixedv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFixedv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFixedv_Idx) = get_ts();
        }


	

}