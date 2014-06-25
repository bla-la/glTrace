#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffersEXT_wrp						\
    ((void  (*)(GLsizei n,const GLenum *bufs                                        \
    ))GL_ENTRY_PTR(glDrawBuffersEXT_Idx))


GLAPI void  APIENTRY glDrawBuffersEXT(GLsizei n,const GLenum *bufs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawBuffersEXT_Idx))
	{
            GL_ENTRY_PTR(glDrawBuffersEXT_Idx) = dlsym(RTLD_NEXT,"glDrawBuffersEXT");
            if(!GL_ENTRY_PTR(glDrawBuffersEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawBuffersEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffersEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffersEXT_wrp(n,bufs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffersEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffersEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffersEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffersEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffersEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDrawBuffersEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffersEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffersEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffersEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffersEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffersEXT_Idx) = get_ts();
        }


	

}