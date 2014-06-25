#include <glTraceCommon.h>
#include <generated.h>

#define glShaderOp3EXT_wrp						\
    ((void  (*)(GLenum op,GLuint res,GLuint arg1,GLuint arg2,GLuint arg3                                        \
    ))GL_ENTRY_PTR(glShaderOp3EXT_Idx))


GLAPI void  APIENTRY glShaderOp3EXT(GLenum op,GLuint res,GLuint arg1,GLuint arg2,GLuint arg3)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderOp3EXT_Idx))
	{
            GL_ENTRY_PTR(glShaderOp3EXT_Idx) = dlsym(RTLD_NEXT,"glShaderOp3EXT");
            if(!GL_ENTRY_PTR(glShaderOp3EXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderOp3EXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderOp3EXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderOp3EXT_wrp(op,res,arg1,arg2,arg3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderOp3EXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderOp3EXT_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderOp3EXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderOp3EXT_Idx),
				 GL_ENTRY_LAST_TS(glShaderOp3EXT_Idx));
        if(last_diff > 1000000000){
            printf("glShaderOp3EXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderOp3EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp3EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp3EXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderOp3EXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderOp3EXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderOp3EXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderOp3EXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderOp3EXT_Idx) = get_ts();
        }


	

}