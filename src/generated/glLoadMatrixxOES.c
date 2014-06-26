#include <glTraceCommon.h>
#include <generated.h>

#define glLoadMatrixxOES_wrp						\
    ((void  (*)(const GLfixed *m                                        \
    ))GL_ENTRY_PTR(glLoadMatrixxOES_Idx))


GLAPI void  APIENTRY glLoadMatrixxOES(const GLfixed *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadMatrixxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadMatrixxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadMatrixxOES_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadMatrixxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadMatrixxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadMatrixxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadMatrixxOES_Idx),
				 GL_ENTRY_LAST_TS(glLoadMatrixxOES_Idx));


        if(last_diff > 1000000000){
            printf("glLoadMatrixxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadMatrixxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadMatrixxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadMatrixxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadMatrixxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadMatrixxOES_Idx) = get_ts();
        }


	

}