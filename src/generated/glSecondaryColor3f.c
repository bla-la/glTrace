#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3f_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3f_Idx))


GLAPI void  APIENTRY glSecondaryColor3f(GLfloat red,GLfloat green,GLfloat blue)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3f_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3f_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3f_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3f_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3f_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3f_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3f_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3f_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3f_Idx) = get_ts();
        }


	

}