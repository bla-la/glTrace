#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetBuffersQCOM_wrp						\
    ((void  (*)(GLuint *buffers,GLint maxBuffers,GLint *numBuffers                                        \
    ))GL_ENTRY_PTR(glExtGetBuffersQCOM_Idx))


GLAPI void  APIENTRY glExtGetBuffersQCOM(GLuint *buffers,GLint maxBuffers,GLint *numBuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtGetBuffersQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtGetBuffersQCOM_Idx) = dlsym(RTLD_NEXT,"glExtGetBuffersQCOM");
            if(!GL_ENTRY_PTR(glExtGetBuffersQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtGetBuffersQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetBuffersQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetBuffersQCOM_wrp(buffers,maxBuffers,numBuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetBuffersQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetBuffersQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetBuffersQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetBuffersQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetBuffersQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtGetBuffersQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetBuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetBuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetBuffersQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetBuffersQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetBuffersQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetBuffersQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetBuffersQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetBuffersQCOM_Idx) = get_ts();
        }


	

}