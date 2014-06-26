#include <glTraceCommon.h>
#include <generated.h>

#define glMultTransposeMatrixxOES_wrp						\
    ((void  (*)(const GLfixed *m                                        \
    ))GL_ENTRY_PTR(glMultTransposeMatrixxOES_Idx))


GLAPI void  APIENTRY glMultTransposeMatrixxOES(const GLfixed *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultTransposeMatrixxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultTransposeMatrixxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultTransposeMatrixxOES_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultTransposeMatrixxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultTransposeMatrixxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMultTransposeMatrixxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultTransposeMatrixxOES_Idx),
				 GL_ENTRY_LAST_TS(glMultTransposeMatrixxOES_Idx));


        if(last_diff > 1000000000){
            printf("glMultTransposeMatrixxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultTransposeMatrixxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultTransposeMatrixxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultTransposeMatrixxOES_Idx) = get_ts();
        }


	

}