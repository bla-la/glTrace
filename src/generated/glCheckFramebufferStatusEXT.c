#include <glTraceCommon.h>
#include <generated.h>

#define glCheckFramebufferStatusEXT_wrp						\
    ((GLenum  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glCheckFramebufferStatusEXT_Idx))


GLAPI GLenum  APIENTRY glCheckFramebufferStatusEXT(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCheckFramebufferStatusEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCheckFramebufferStatusEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glCheckFramebufferStatusEXT_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCheckFramebufferStatusEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCheckFramebufferStatusEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCheckFramebufferStatusEXT_Idx),
				 GL_ENTRY_LAST_TS(glCheckFramebufferStatusEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCheckFramebufferStatusEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCheckFramebufferStatusEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCheckFramebufferStatusEXT_Idx) = get_ts();
        }


	return retval;

}