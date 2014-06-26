#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glTexEnvfv_Idx))


GLAPI void  APIENTRY glTexEnvfv(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexEnvfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvfv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvfv_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvfv_Idx));


        if(last_diff > 1000000000){
            printf("glTexEnvfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvfv_Idx) = get_ts();
        }


	

}