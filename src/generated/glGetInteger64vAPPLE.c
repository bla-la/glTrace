#include <glTraceCommon.h>
#include <generated.h>

#define glGetInteger64vAPPLE_wrp						\
    ((void  (*)(GLenum pname,GLint64 *params                                        \
    ))GL_ENTRY_PTR(glGetInteger64vAPPLE_Idx))


GLAPI void  APIENTRY glGetInteger64vAPPLE(GLenum pname,GLint64 *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetInteger64vAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInteger64vAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInteger64vAPPLE_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInteger64vAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInteger64vAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInteger64vAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInteger64vAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGetInteger64vAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glGetInteger64vAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInteger64vAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetInteger64vAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetInteger64vAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInteger64vAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInteger64vAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInteger64vAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInteger64vAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInteger64vAPPLE_Idx) = get_ts();
        }


	

}