#include <glTraceCommon.h>
#include <generated.h>

#define glLogicOp_wrp						\
    ((void  (*)(GLenum opcode                                        \
    ))GL_ENTRY_PTR(glLogicOp_Idx))


GLAPI void  APIENTRY glLogicOp(GLenum opcode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLogicOp_Idx))
	{
            GL_ENTRY_PTR(glLogicOp_Idx) = dlsym(RTLD_NEXT,"glLogicOp");
            if(!GL_ENTRY_PTR(glLogicOp_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLogicOp_Idx))
    	{
            GL_ENTRY_PREV_TS(glLogicOp_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLogicOp_wrp(opcode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLogicOp_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLogicOp_Idx) ++;

        GL_ENTRY_LAST_TS(glLogicOp_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLogicOp_Idx),
				 GL_ENTRY_LAST_TS(glLogicOp_Idx));
        if(last_diff > 1000000000){
            printf("glLogicOp %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLogicOp_Idx),
	             GL_ENTRY_CALL_TIME(glLogicOp_Idx),
	             GL_ENTRY_CALL_TIME(glLogicOp_Idx) /
	             GL_ENTRY_CALL_COUNT(glLogicOp_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLogicOp_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLogicOp_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLogicOp_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLogicOp_Idx) = get_ts();
        }


	

}