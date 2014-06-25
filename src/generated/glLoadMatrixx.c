#include <glTraceCommon.h>
#include <generated.h>

#define glLoadMatrixx_wrp						\
    ((void  (*)(const GLfixed *m                                        \
    ))GL_ENTRY_PTR(glLoadMatrixx_Idx))


GLAPI void  APIENTRY glLoadMatrixx(const GLfixed *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLoadMatrixx_Idx))
	{
            GL_ENTRY_PTR(glLoadMatrixx_Idx) = dlsym(RTLD_NEXT,"glLoadMatrixx");
            if(!GL_ENTRY_PTR(glLoadMatrixx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLoadMatrixx_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadMatrixx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadMatrixx_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadMatrixx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadMatrixx_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadMatrixx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadMatrixx_Idx),
				 GL_ENTRY_LAST_TS(glLoadMatrixx_Idx));
        if(last_diff > 1000000000){
            printf("glLoadMatrixx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadMatrixx_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixx_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixx_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadMatrixx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadMatrixx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadMatrixx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadMatrixx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadMatrixx_Idx) = get_ts();
        }


	

}