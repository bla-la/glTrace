#include <glTraceCommon.h>
#include <generated.h>

#define glMinmax_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLboolean sink                                        \
    ))GL_ENTRY_PTR(glMinmax_Idx))


GLAPI void  APIENTRY glMinmax(GLenum target,GLenum internalformat,GLboolean sink)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMinmax_Idx))
	{
            GL_ENTRY_PTR(glMinmax_Idx) = dlsym(RTLD_NEXT,"glMinmax");
            if(!GL_ENTRY_PTR(glMinmax_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMinmax_Idx))
    	{
            GL_ENTRY_PREV_TS(glMinmax_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMinmax_wrp(target,internalformat,sink);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMinmax_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMinmax_Idx) ++;

        GL_ENTRY_LAST_TS(glMinmax_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMinmax_Idx),
				 GL_ENTRY_LAST_TS(glMinmax_Idx));
        if(last_diff > 1000000000){
            printf("glMinmax %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glMinmax_Idx) /
	             GL_ENTRY_CALL_COUNT(glMinmax_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMinmax_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMinmax_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMinmax_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMinmax_Idx) = get_ts();
        }


	

}