#include <glTraceCommon.h>
#include <generated.h>

#define glGetPointervKHR_wrp						\
    ((void  (*)(GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetPointervKHR_Idx))


GLAPI void  APIENTRY glGetPointervKHR(GLenum pname,void **params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPointervKHR_Idx))
	{
            GL_ENTRY_PTR(glGetPointervKHR_Idx) = dlsym(RTLD_NEXT,"glGetPointervKHR");
            if(!GL_ENTRY_PTR(glGetPointervKHR_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPointervKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPointervKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPointervKHR_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPointervKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPointervKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPointervKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPointervKHR_Idx),
				 GL_ENTRY_LAST_TS(glGetPointervKHR_Idx));
        if(last_diff > 1000000000){
            printf("glGetPointervKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPointervKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointervKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointervKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPointervKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPointervKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPointervKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPointervKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPointervKHR_Idx) = get_ts();
        }


	

}