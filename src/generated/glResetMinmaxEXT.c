#include <glTraceCommon.h>
#include <generated.h>

#define glResetMinmaxEXT_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glResetMinmaxEXT_Idx))


GLAPI void  APIENTRY glResetMinmaxEXT(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glResetMinmaxEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glResetMinmaxEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glResetMinmaxEXT_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glResetMinmaxEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glResetMinmaxEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glResetMinmaxEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glResetMinmaxEXT_Idx),
				 GL_ENTRY_LAST_TS(glResetMinmaxEXT_Idx));


        if(last_diff > 1000000000){
            printf("glResetMinmaxEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glResetMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glResetMinmaxEXT_Idx),
	             GL_ENTRY_CALL_TIME(glResetMinmaxEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glResetMinmaxEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glResetMinmaxEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glResetMinmaxEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glResetMinmaxEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glResetMinmaxEXT_Idx) = get_ts();
        }


	

}