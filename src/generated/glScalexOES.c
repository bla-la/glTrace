#include <glTraceCommon.h>
#include <generated.h>

#define glScalexOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glScalexOES_Idx))


GLAPI void  APIENTRY glScalexOES(GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glScalexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glScalexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScalexOES_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScalexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScalexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glScalexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScalexOES_Idx),
				 GL_ENTRY_LAST_TS(glScalexOES_Idx));


        if(last_diff > 1000000000){
            printf("glScalexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScalexOES_Idx),
	             GL_ENTRY_CALL_TIME(glScalexOES_Idx),
	             GL_ENTRY_CALL_TIME(glScalexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glScalexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScalexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScalexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScalexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScalexOES_Idx) = get_ts();
        }


	

}