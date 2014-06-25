#include <glTraceCommon.h>
#include <generated.h>

#define glGetMinmax_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values                                        \
    ))GL_ENTRY_PTR(glGetMinmax_Idx))


GLAPI void  APIENTRY glGetMinmax(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMinmax_Idx))
	{
            GL_ENTRY_PTR(glGetMinmax_Idx) = dlsym(RTLD_NEXT,"glGetMinmax");
            if(!GL_ENTRY_PTR(glGetMinmax_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMinmax_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMinmax_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMinmax_wrp(target,reset,format,type,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMinmax_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMinmax_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMinmax_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMinmax_Idx),
				 GL_ENTRY_LAST_TS(glGetMinmax_Idx));
        if(last_diff > 1000000000){
            printf("glGetMinmax %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmax_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMinmax_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMinmax_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMinmax_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMinmax_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMinmax_Idx) = get_ts();
        }


	

}