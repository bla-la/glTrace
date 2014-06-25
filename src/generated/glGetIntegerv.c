#include <glTraceCommon.h>
#include <generated.h>

#define glGetIntegerv_wrp						\
    ((void  (*)(GLenum pname,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetIntegerv_Idx))


GLAPI void  APIENTRY glGetIntegerv(GLenum pname,GLint *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetIntegerv_Idx))
	{
            GL_ENTRY_PTR(glGetIntegerv_Idx) = dlsym(RTLD_NEXT,"glGetIntegerv");
            if(!GL_ENTRY_PTR(glGetIntegerv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetIntegerv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetIntegerv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetIntegerv_wrp(pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetIntegerv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetIntegerv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetIntegerv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetIntegerv_Idx),
				 GL_ENTRY_LAST_TS(glGetIntegerv_Idx));
        if(last_diff > 1000000000){
            printf("glGetIntegerv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetIntegerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetIntegerv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetIntegerv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetIntegerv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetIntegerv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetIntegerv_Idx) = get_ts();
        }


	

}