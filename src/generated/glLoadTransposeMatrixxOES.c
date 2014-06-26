#include <glTraceCommon.h>
#include <generated.h>

#define glLoadTransposeMatrixxOES_wrp						\
    ((void  (*)(const GLfixed *m                                        \
    ))GL_ENTRY_PTR(glLoadTransposeMatrixxOES_Idx))


GLAPI void  APIENTRY glLoadTransposeMatrixxOES(const GLfixed *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadTransposeMatrixxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadTransposeMatrixxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadTransposeMatrixxOES_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadTransposeMatrixxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadTransposeMatrixxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadTransposeMatrixxOES_Idx),
				 GL_ENTRY_LAST_TS(glLoadTransposeMatrixxOES_Idx));


        if(last_diff > 1000000000){
            printf("glLoadTransposeMatrixxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadTransposeMatrixxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadTransposeMatrixxOES_Idx) = get_ts();
        }


	

}