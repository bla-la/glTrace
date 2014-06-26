#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvxv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glTexEnvxv_Idx))


GLAPI void  APIENTRY glTexEnvxv(GLenum target,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexEnvxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvxv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvxv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvxv_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvxv_Idx));


        if(last_diff > 1000000000){
            printf("glTexEnvxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvxv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxv_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvxv_Idx) = get_ts();
        }


	

}