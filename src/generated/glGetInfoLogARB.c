#include <glTraceCommon.h>
#include <generated.h>

#define glGetInfoLogARB_wrp						\
    ((void  (*)(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *infoLog                                        \
    ))GL_ENTRY_PTR(glGetInfoLogARB_Idx))


GLAPI void  APIENTRY glGetInfoLogARB(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *infoLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetInfoLogARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInfoLogARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInfoLogARB_wrp(obj,maxLength,length,infoLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInfoLogARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInfoLogARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInfoLogARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInfoLogARB_Idx),
				 GL_ENTRY_LAST_TS(glGetInfoLogARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetInfoLogARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInfoLogARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetInfoLogARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetInfoLogARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInfoLogARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInfoLogARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInfoLogARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInfoLogARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInfoLogARB_Idx) = get_ts();
        }


	

}