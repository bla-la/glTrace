#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferPointerv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetBufferPointerv_Idx))


GLAPI void  APIENTRY glGetBufferPointerv(GLenum target,GLenum pname,void **params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBufferPointerv_Idx))
	{
            GL_ENTRY_PTR(glGetBufferPointerv_Idx) = dlsym(RTLD_NEXT,"glGetBufferPointerv");
            if(!GL_ENTRY_PTR(glGetBufferPointerv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBufferPointerv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferPointerv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferPointerv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferPointerv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferPointerv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferPointerv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferPointerv_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferPointerv_Idx));
        if(last_diff > 1000000000){
            printf("glGetBufferPointerv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointerv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferPointerv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferPointerv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferPointerv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferPointerv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferPointerv_Idx) = get_ts();
        }


	

}