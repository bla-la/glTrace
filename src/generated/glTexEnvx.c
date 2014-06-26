#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvx_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glTexEnvx_Idx))


GLAPI void  APIENTRY glTexEnvx(GLenum target,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexEnvx_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvx_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvx_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvx_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvx_Idx));


        if(last_diff > 1000000000){
            printf("glTexEnvx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvx_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvx_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvx_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvx_Idx) = get_ts();
        }


	

}