#include <glTraceCommon.h>
#include <generated.h>

#define glQueryCounterEXT_wrp						\
    ((void  (*)(GLuint id,GLenum target                                        \
    ))GL_ENTRY_PTR(glQueryCounterEXT_Idx))


GLAPI void  APIENTRY glQueryCounterEXT(GLuint id,GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glQueryCounterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glQueryCounterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glQueryCounterEXT_wrp(id,target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glQueryCounterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glQueryCounterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glQueryCounterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glQueryCounterEXT_Idx),
				 GL_ENTRY_LAST_TS(glQueryCounterEXT_Idx));


        if(last_diff > 1000000000){
            printf("glQueryCounterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glQueryCounterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glQueryCounterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glQueryCounterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glQueryCounterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glQueryCounterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glQueryCounterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glQueryCounterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glQueryCounterEXT_Idx) = get_ts();
        }


	

}