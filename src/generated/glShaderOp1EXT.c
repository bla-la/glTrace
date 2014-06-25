#include <glTraceCommon.h>
#include <generated.h>

#define glShaderOp1EXT_wrp						\
    ((void  (*)(GLenum op,GLuint res,GLuint arg1                                        \
    ))GL_ENTRY_PTR(glShaderOp1EXT_Idx))


GLAPI void  APIENTRY glShaderOp1EXT(GLenum op,GLuint res,GLuint arg1)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderOp1EXT_Idx))
	{
            GL_ENTRY_PTR(glShaderOp1EXT_Idx) = dlsym(RTLD_NEXT,"glShaderOp1EXT");
            if(!GL_ENTRY_PTR(glShaderOp1EXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderOp1EXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderOp1EXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderOp1EXT_wrp(op,res,arg1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderOp1EXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderOp1EXT_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderOp1EXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderOp1EXT_Idx),
				 GL_ENTRY_LAST_TS(glShaderOp1EXT_Idx));
        if(last_diff > 1000000000){
            printf("glShaderOp1EXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderOp1EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp1EXT_Idx),
	             GL_ENTRY_CALL_TIME(glShaderOp1EXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderOp1EXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderOp1EXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderOp1EXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderOp1EXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderOp1EXT_Idx) = get_ts();
        }


	

}