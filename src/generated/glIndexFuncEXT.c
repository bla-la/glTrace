#include <glTraceCommon.h>
#include <generated.h>

#define glIndexFuncEXT_wrp						\
    ((void  (*)(GLenum func,GLclampf ref                                        \
    ))GL_ENTRY_PTR(glIndexFuncEXT_Idx))


GLAPI void  APIENTRY glIndexFuncEXT(GLenum func,GLclampf ref)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexFuncEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexFuncEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexFuncEXT_wrp(func,ref);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexFuncEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexFuncEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexFuncEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexFuncEXT_Idx),
				 GL_ENTRY_LAST_TS(glIndexFuncEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIndexFuncEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexFuncEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIndexFuncEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIndexFuncEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexFuncEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexFuncEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexFuncEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexFuncEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexFuncEXT_Idx) = get_ts();
        }


	

}