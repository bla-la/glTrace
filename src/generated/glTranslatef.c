#include <glTraceCommon.h>
#include <generated.h>

#define glTranslatef_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glTranslatef_Idx))


GLAPI void  APIENTRY glTranslatef(GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTranslatef_Idx))
    	{
            GL_ENTRY_PREV_TS(glTranslatef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTranslatef_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTranslatef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTranslatef_Idx) ++;

        GL_ENTRY_LAST_TS(glTranslatef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTranslatef_Idx),
				 GL_ENTRY_LAST_TS(glTranslatef_Idx));


        if(last_diff > 1000000000){
            printf("glTranslatef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTranslatef_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatef_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatef_Idx) /
	             GL_ENTRY_CALL_COUNT(glTranslatef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTranslatef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTranslatef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTranslatef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTranslatef_Idx) = get_ts();
        }


	

}