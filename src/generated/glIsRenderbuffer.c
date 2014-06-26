#include <glTraceCommon.h>
#include <generated.h>

#define glIsRenderbuffer_wrp						\
    ((GLboolean  (*)(GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glIsRenderbuffer_Idx))


GLAPI GLboolean  APIENTRY glIsRenderbuffer(GLuint renderbuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsRenderbuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsRenderbuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsRenderbuffer_wrp(renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsRenderbuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsRenderbuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glIsRenderbuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsRenderbuffer_Idx),
				 GL_ENTRY_LAST_TS(glIsRenderbuffer_Idx));


        if(last_diff > 1000000000){
            printf("glIsRenderbuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsRenderbuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsRenderbuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsRenderbuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsRenderbuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsRenderbuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsRenderbuffer_Idx) = get_ts();
        }


	return retval;

}