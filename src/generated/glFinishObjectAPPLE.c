#include <glTraceCommon.h>
#include <generated.h>

#define glFinishObjectAPPLE_wrp						\
    ((void  (*)(GLenum object,GLint name                                        \
    ))GL_ENTRY_PTR(glFinishObjectAPPLE_Idx))


GLAPI void  APIENTRY glFinishObjectAPPLE(GLenum object,GLint name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFinishObjectAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glFinishObjectAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFinishObjectAPPLE_wrp(object,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFinishObjectAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFinishObjectAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glFinishObjectAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFinishObjectAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glFinishObjectAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glFinishObjectAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFinishObjectAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFinishObjectAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFinishObjectAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glFinishObjectAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFinishObjectAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFinishObjectAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFinishObjectAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFinishObjectAPPLE_Idx) = get_ts();
        }


	

}