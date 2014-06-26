#include <glTraceCommon.h>
#include <generated.h>

#define glGetPointerv_wrp						\
    ((void  (*)(GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetPointerv_Idx))


GLAPI void  APIENTRY glGetPointerv(GLenum pname,void **params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPointerv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPointerv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPointerv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPointerv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPointerv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPointerv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPointerv_Idx),
				 GL_ENTRY_LAST_TS(glGetPointerv_Idx));


        if(last_diff > 1000000000){
            printf("glGetPointerv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointerv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointerv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPointerv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPointerv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPointerv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPointerv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPointerv_Idx) = get_ts();
        }


	

}