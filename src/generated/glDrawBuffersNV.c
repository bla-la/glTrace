#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffersNV_wrp						\
    ((void  (*)(GLsizei n,const GLenum *bufs                                        \
    ))GL_ENTRY_PTR(glDrawBuffersNV_Idx))


GLAPI void  APIENTRY glDrawBuffersNV(GLsizei n,const GLenum *bufs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawBuffersNV_Idx))
	{
            GL_ENTRY_PTR(glDrawBuffersNV_Idx) = dlsym(RTLD_NEXT,"glDrawBuffersNV");
            if(!GL_ENTRY_PTR(glDrawBuffersNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawBuffersNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffersNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffersNV_wrp(n,bufs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffersNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffersNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffersNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffersNV_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffersNV_Idx));
        if(last_diff > 1000000000){
            printf("glDrawBuffersNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffersNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffersNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffersNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffersNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffersNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffersNV_Idx) = get_ts();
        }


	

}