#include <glTraceCommon.h>
#include <generated.h>

#define glIsRenderbufferOES_wrp						\
    ((GLboolean  (*)(GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glIsRenderbufferOES_Idx))


GLAPI GLboolean  APIENTRY glIsRenderbufferOES(GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsRenderbufferOES_Idx))
	{
            GL_ENTRY_PTR(glIsRenderbufferOES_Idx) = dlsym(RTLD_NEXT,"glIsRenderbufferOES");
            if(!GL_ENTRY_PTR(glIsRenderbufferOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsRenderbufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsRenderbufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsRenderbufferOES_wrp(renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsRenderbufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsRenderbufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glIsRenderbufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsRenderbufferOES_Idx),
				 GL_ENTRY_LAST_TS(glIsRenderbufferOES_Idx));
        if(last_diff > 1000000000){
            printf("glIsRenderbufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsRenderbufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsRenderbufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsRenderbufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsRenderbufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsRenderbufferOES_Idx) = get_ts();
        }


	return retval;

}