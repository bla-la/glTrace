#include <glTraceCommon.h>
#include <generated.h>

#define glScalef_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glScalef_Idx))


GLAPI void  APIENTRY glScalef(GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glScalef_Idx))
    	{
            GL_ENTRY_PREV_TS(glScalef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScalef_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScalef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScalef_Idx) ++;

        GL_ENTRY_LAST_TS(glScalef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScalef_Idx),
				 GL_ENTRY_LAST_TS(glScalef_Idx));


        if(last_diff > 1000000000){
            printf("glScalef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScalef_Idx),
	             GL_ENTRY_CALL_TIME(glScalef_Idx),
	             GL_ENTRY_CALL_TIME(glScalef_Idx) /
	             GL_ENTRY_CALL_COUNT(glScalef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScalef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScalef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScalef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScalef_Idx) = get_ts();
        }


	

}