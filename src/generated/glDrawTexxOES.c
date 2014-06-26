#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTexxOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z,GLfixed width,GLfixed height                                        \
    ))GL_ENTRY_PTR(glDrawTexxOES_Idx))


GLAPI void  APIENTRY glDrawTexxOES(GLfixed x,GLfixed y,GLfixed z,GLfixed width,GLfixed height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTexxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTexxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTexxOES_wrp(x,y,z,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTexxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTexxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTexxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTexxOES_Idx),
				 GL_ENTRY_LAST_TS(glDrawTexxOES_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTexxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTexxOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexxOES_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTexxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTexxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTexxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTexxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTexxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTexxOES_Idx) = get_ts();
        }


	

}