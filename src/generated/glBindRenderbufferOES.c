#include <glTraceCommon.h>
#include <generated.h>

#define glBindRenderbufferOES_wrp						\
    ((void  (*)(GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glBindRenderbufferOES_Idx))


GLAPI void  APIENTRY glBindRenderbufferOES(GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindRenderbufferOES_Idx))
	{
            GL_ENTRY_PTR(glBindRenderbufferOES_Idx) = dlsym(RTLD_NEXT,"glBindRenderbufferOES");
            if(!GL_ENTRY_PTR(glBindRenderbufferOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindRenderbufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindRenderbufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindRenderbufferOES_wrp(target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindRenderbufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindRenderbufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBindRenderbufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindRenderbufferOES_Idx),
				 GL_ENTRY_LAST_TS(glBindRenderbufferOES_Idx));
        if(last_diff > 1000000000){
            printf("glBindRenderbufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glBindRenderbufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindRenderbufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindRenderbufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindRenderbufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindRenderbufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindRenderbufferOES_Idx) = get_ts();
        }


	

}