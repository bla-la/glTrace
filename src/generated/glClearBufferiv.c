#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferiv_wrp						\
    ((void  (*)(GLenum buffer,GLint drawbuffer,const GLint *value                                        \
    ))GL_ENTRY_PTR(glClearBufferiv_Idx))


GLAPI void  APIENTRY glClearBufferiv(GLenum buffer,GLint drawbuffer,const GLint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearBufferiv_Idx))
	{
            GL_ENTRY_PTR(glClearBufferiv_Idx) = dlsym(RTLD_NEXT,"glClearBufferiv");
            if(!GL_ENTRY_PTR(glClearBufferiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearBufferiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferiv_wrp(buffer,drawbuffer,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferiv_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferiv_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferiv_Idx));
        if(last_diff > 1000000000){
            printf("glClearBufferiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferiv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferiv_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferiv_Idx) = get_ts();
        }


	

}