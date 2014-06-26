#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArrays_wrp						\
    ((void  (*)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawArrays_Idx))


GLAPI void  APIENTRY glMultiDrawArrays(GLenum mode,const GLint *first,const GLsizei *count,GLsizei drawcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawArrays_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArrays_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArrays_wrp(mode,first,count,drawcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArrays_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArrays_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArrays_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArrays_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArrays_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawArrays %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArrays_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArrays_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArrays_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArrays_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArrays_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArrays_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArrays_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArrays_Idx) = get_ts();
        }


	

}