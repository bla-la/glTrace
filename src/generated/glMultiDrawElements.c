#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElements_wrp						\
    ((void  (*)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawElements_Idx))


GLAPI void  APIENTRY glMultiDrawElements(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElements_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElements_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElements_wrp(mode,count,type,indices,drawcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElements_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElements_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElements_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElements_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElements_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElements %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElements_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElements_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElements_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElements_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElements_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElements_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElements_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElements_Idx) = get_ts();
        }


	

}