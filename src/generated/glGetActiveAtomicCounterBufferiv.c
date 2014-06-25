#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveAtomicCounterBufferiv_wrp						\
    ((void  (*)(GLuint program,GLuint bufferIndex,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetActiveAtomicCounterBufferiv_Idx))


GLAPI void  APIENTRY glGetActiveAtomicCounterBufferiv(GLuint program,GLuint bufferIndex,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveAtomicCounterBufferiv_Idx))
	{
            GL_ENTRY_PTR(glGetActiveAtomicCounterBufferiv_Idx) = dlsym(RTLD_NEXT,"glGetActiveAtomicCounterBufferiv");
            if(!GL_ENTRY_PTR(glGetActiveAtomicCounterBufferiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveAtomicCounterBufferiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveAtomicCounterBufferiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveAtomicCounterBufferiv_wrp(program,bufferIndex,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveAtomicCounterBufferiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveAtomicCounterBufferiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveAtomicCounterBufferiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveAtomicCounterBufferiv_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveAtomicCounterBufferiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveAtomicCounterBufferiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveAtomicCounterBufferiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAtomicCounterBufferiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAtomicCounterBufferiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveAtomicCounterBufferiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveAtomicCounterBufferiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveAtomicCounterBufferiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveAtomicCounterBufferiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveAtomicCounterBufferiv_Idx) = get_ts();
        }


	

}