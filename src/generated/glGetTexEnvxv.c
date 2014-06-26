#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexEnvxv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetTexEnvxv_Idx))


GLAPI void  APIENTRY glGetTexEnvxv(GLenum target,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexEnvxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexEnvxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexEnvxv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexEnvxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexEnvxv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexEnvxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexEnvxv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexEnvxv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexEnvxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexEnvxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexEnvxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexEnvxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexEnvxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexEnvxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexEnvxv_Idx) = get_ts();
        }


	

}