#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexEnvfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTexEnvfv_Idx))


GLAPI void  APIENTRY glGetTexEnvfv(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexEnvfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexEnvfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexEnvfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexEnvfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexEnvfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexEnvfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexEnvfv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexEnvfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexEnvfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexEnvfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexEnvfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexEnvfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexEnvfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexEnvfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexEnvfv_Idx) = get_ts();
        }


	

}