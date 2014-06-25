#include <glTraceCommon.h>
#include <generated.h>

#define glBindRenderbuffer_wrp						\
    ((void  (*)(GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glBindRenderbuffer_Idx))


GLAPI void  APIENTRY glBindRenderbuffer(GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindRenderbuffer_Idx))
	{
            GL_ENTRY_PTR(glBindRenderbuffer_Idx) = dlsym(RTLD_NEXT,"glBindRenderbuffer");
            if(!GL_ENTRY_PTR(glBindRenderbuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindRenderbuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindRenderbuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindRenderbuffer_wrp(target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindRenderbuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindRenderbuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glBindRenderbuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindRenderbuffer_Idx),
				 GL_ENTRY_LAST_TS(glBindRenderbuffer_Idx));
        if(last_diff > 1000000000){
            printf("glBindRenderbuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindRenderbuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindRenderbuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindRenderbuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindRenderbuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindRenderbuffer_Idx) = get_ts();
        }


	

}