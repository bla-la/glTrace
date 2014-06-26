#include <glTraceCommon.h>
#include <generated.h>

#define glColor3xvOES_wrp						\
    ((void  (*)(const GLfixed *components                                        \
    ))GL_ENTRY_PTR(glColor3xvOES_Idx))


GLAPI void  APIENTRY glColor3xvOES(const GLfixed *components)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor3xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3xvOES_wrp(components);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3xvOES_Idx),
				 GL_ENTRY_LAST_TS(glColor3xvOES_Idx));


        if(last_diff > 1000000000){
            printf("glColor3xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor3xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor3xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3xvOES_Idx) = get_ts();
        }


	

}