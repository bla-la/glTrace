#include <glTraceCommon.h>
#include <generated.h>

#define glEndQueryEXT_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glEndQueryEXT_Idx))


GLAPI void  APIENTRY glEndQueryEXT(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEndQueryEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndQueryEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndQueryEXT_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndQueryEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndQueryEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEndQueryEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndQueryEXT_Idx),
				 GL_ENTRY_LAST_TS(glEndQueryEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEndQueryEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndQueryEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndQueryEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndQueryEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndQueryEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndQueryEXT_Idx) = get_ts();
        }


	

}