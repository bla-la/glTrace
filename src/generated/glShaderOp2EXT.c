#include <glTraceCommon.h>
#include <generated.h>

#define glShaderOp2EXT_wrp						\
    ((void  (*)(GLenum op,GLuint res,GLuint arg1,GLuint arg2                                        \
    ))GL_ENTRY_PTR(glShaderOp2EXT_Idx))


GLAPI void  APIENTRY glShaderOp2EXT(GLenum op,GLuint res,GLuint arg1,GLuint arg2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderOp2EXT_Idx))
	{
            GL_ENTRY_PTR(glShaderOp2EXT_Idx) = dlsym(RTLD_NEXT,"glShaderOp2EXT");
            if(!GL_ENTRY_PTR(glShaderOp2EXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderOp2EXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderOp2EXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderOp2EXT_wrp(op,res,arg1,arg2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderOp2EXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderOp2EXT_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderOp2EXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderOp2EXT_Idx),
				 GL_ENTRY_LAST_TS(glShaderOp2EXT_Idx));
        if(last_diff > 1000000000){
            printf("glShaderOp2EXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderOp2EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp2EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp2EXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderOp2EXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderOp2EXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderOp2EXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderOp2EXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderOp2EXT_Idx) = get_ts();
        }


	

}