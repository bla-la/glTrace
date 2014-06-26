#include <glTraceCommon.h>
#include <generated.h>

#define glIsRenderbufferEXT_wrp						\
    ((GLboolean  (*)(GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glIsRenderbufferEXT_Idx))


GLAPI GLboolean  APIENTRY glIsRenderbufferEXT(GLuint renderbuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsRenderbufferEXT_wrp(renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsRenderbufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIsRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsRenderbufferEXT_Idx) = get_ts();
        }


	return retval;

}