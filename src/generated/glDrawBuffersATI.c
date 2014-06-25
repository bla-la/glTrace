#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffersATI_wrp						\
    ((void  (*)(GLsizei n,const GLenum *bufs                                        \
    ))GL_ENTRY_PTR(glDrawBuffersATI_Idx))


GLAPI void  APIENTRY glDrawBuffersATI(GLsizei n,const GLenum *bufs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawBuffersATI_Idx))
	{
            GL_ENTRY_PTR(glDrawBuffersATI_Idx) = dlsym(RTLD_NEXT,"glDrawBuffersATI");
            if(!GL_ENTRY_PTR(glDrawBuffersATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawBuffersATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffersATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffersATI_wrp(n,bufs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffersATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffersATI_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffersATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffersATI_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffersATI_Idx));
        if(last_diff > 1000000000){
            printf("glDrawBuffersATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffersATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffersATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffersATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffersATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffersATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffersATI_Idx) = get_ts();
        }


	

}