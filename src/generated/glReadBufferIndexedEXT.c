#include <glTraceCommon.h>
#include <generated.h>

#define glReadBufferIndexedEXT_wrp						\
    ((void  (*)(GLenum src,GLint index                                        \
    ))GL_ENTRY_PTR(glReadBufferIndexedEXT_Idx))


GLAPI void  APIENTRY glReadBufferIndexedEXT(GLenum src,GLint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReadBufferIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glReadBufferIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReadBufferIndexedEXT_wrp(src,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReadBufferIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReadBufferIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glReadBufferIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReadBufferIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glReadBufferIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glReadBufferIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReadBufferIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glReadBufferIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glReadBufferIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glReadBufferIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReadBufferIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReadBufferIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReadBufferIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReadBufferIndexedEXT_Idx) = get_ts();
        }


	

}