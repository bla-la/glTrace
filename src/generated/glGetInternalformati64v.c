#include <glTraceCommon.h>
#include <generated.h>

#define glGetInternalformati64v_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint64 *params                                        \
    ))GL_ENTRY_PTR(glGetInternalformati64v_Idx))


GLAPI void  APIENTRY glGetInternalformati64v(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint64 *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetInternalformati64v_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInternalformati64v_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInternalformati64v_wrp(target,internalformat,pname,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInternalformati64v_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInternalformati64v_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInternalformati64v_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInternalformati64v_Idx),
				 GL_ENTRY_LAST_TS(glGetInternalformati64v_Idx));


        if(last_diff > 1000000000){
            printf("glGetInternalformati64v %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInternalformati64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetInternalformati64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetInternalformati64v_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInternalformati64v_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInternalformati64v_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInternalformati64v_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInternalformati64v_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInternalformati64v_Idx) = get_ts();
        }


	

}