#include <glTraceCommon.h>
#include <generated.h>

#define glMap1xOES_wrp						\
    ((void  (*)(GLenum target,GLfixed u1,GLfixed u2,GLint stride,GLint order,GLfixed points                                        \
    ))GL_ENTRY_PTR(glMap1xOES_Idx))


GLAPI void  APIENTRY glMap1xOES(GLenum target,GLfixed u1,GLfixed u2,GLint stride,GLint order,GLfixed points)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMap1xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMap1xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMap1xOES_wrp(target,u1,u2,stride,order,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMap1xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMap1xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMap1xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMap1xOES_Idx),
				 GL_ENTRY_LAST_TS(glMap1xOES_Idx));


        if(last_diff > 1000000000){
            printf("glMap1xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMap1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMap1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMap1xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMap1xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMap1xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMap1xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMap1xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMap1xOES_Idx) = get_ts();
        }


	

}