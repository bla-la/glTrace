#include <glTraceCommon.h>
#include <generated.h>

#define glBindRenderbufferEXT_wrp						\
    ((void  (*)(GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glBindRenderbufferEXT_Idx))


GLAPI void  APIENTRY glBindRenderbufferEXT(GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindRenderbufferEXT_Idx))
	{
            GL_ENTRY_PTR(glBindRenderbufferEXT_Idx) = dlsym(RTLD_NEXT,"glBindRenderbufferEXT");
            if(!GL_ENTRY_PTR(glBindRenderbufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindRenderbufferEXT_wrp(target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindRenderbufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindRenderbufferEXT_Idx) = get_ts();
        }


	

}