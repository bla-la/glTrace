#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexGeniv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexGeniv_Idx))


GLAPI void  APIENTRY glGetTexGeniv(GLenum coord,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexGeniv_Idx))
	{
            GL_ENTRY_PTR(glGetTexGeniv_Idx) = dlsym(RTLD_NEXT,"glGetTexGeniv");
            if(!GL_ENTRY_PTR(glGetTexGeniv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexGeniv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexGeniv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexGeniv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexGeniv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexGeniv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexGeniv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexGeniv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexGeniv_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexGeniv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexGeniv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGeniv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexGeniv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexGeniv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexGeniv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexGeniv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexGeniv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexGeniv_Idx) = get_ts();
        }


	

}