#include <glTraceCommon.h>
#include <generated.h>

#define glGetInternalformativ_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetInternalformativ_Idx))


GLAPI void  APIENTRY glGetInternalformativ(GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetInternalformativ_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInternalformativ_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInternalformativ_wrp(target,internalformat,pname,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInternalformativ_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInternalformativ_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInternalformativ_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInternalformativ_Idx),
				 GL_ENTRY_LAST_TS(glGetInternalformativ_Idx));


        if(last_diff > 1000000000){
            printf("glGetInternalformativ %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInternalformativ_Idx),
	             GL_ENTRY_CALL_TIME(glGetInternalformativ_Idx),
	             GL_ENTRY_CALL_TIME(glGetInternalformativ_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInternalformativ_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInternalformativ_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInternalformativ_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInternalformativ_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInternalformativ_Idx) = get_ts();
        }


	

}