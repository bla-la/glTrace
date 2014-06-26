#include <glTraceCommon.h>
#include <generated.h>

#define glReadnPixelsARB_wrp						\
    ((void  (*)(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data                                        \
    ))GL_ENTRY_PTR(glReadnPixelsARB_Idx))


GLAPI void  APIENTRY glReadnPixelsARB(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReadnPixelsARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glReadnPixelsARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReadnPixelsARB_wrp(x,y,width,height,format,type,bufSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReadnPixelsARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReadnPixelsARB_Idx) ++;

        GL_ENTRY_LAST_TS(glReadnPixelsARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReadnPixelsARB_Idx),
				 GL_ENTRY_LAST_TS(glReadnPixelsARB_Idx));


        if(last_diff > 1000000000){
            printf("glReadnPixelsARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReadnPixelsARB_Idx),
	             GL_ENTRY_CALL_TIME(glReadnPixelsARB_Idx),
	             GL_ENTRY_CALL_TIME(glReadnPixelsARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glReadnPixelsARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReadnPixelsARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReadnPixelsARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReadnPixelsARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReadnPixelsARB_Idx) = get_ts();
        }


	

}