#include <glTraceCommon.h>
#include <generated.h>

#define glRotatef_wrp						\
    ((void  (*)(GLfloat angle,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glRotatef_Idx))


GLAPI void  APIENTRY glRotatef(GLfloat angle,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRotatef_Idx))
    	{
            GL_ENTRY_PREV_TS(glRotatef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRotatef_wrp(angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRotatef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRotatef_Idx) ++;

        GL_ENTRY_LAST_TS(glRotatef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRotatef_Idx),
				 GL_ENTRY_LAST_TS(glRotatef_Idx));


        if(last_diff > 1000000000){
            printf("glRotatef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRotatef_Idx),
	             GL_ENTRY_CALL_TIME(glRotatef_Idx),
	             GL_ENTRY_CALL_TIME(glRotatef_Idx) /
	             GL_ENTRY_CALL_COUNT(glRotatef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRotatef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRotatef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRotatef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRotatef_Idx) = get_ts();
        }


	

}