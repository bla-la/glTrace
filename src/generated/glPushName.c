#include <glTraceCommon.h>
#include <generated.h>

#define glPushName_wrp						\
    ((void  (*)(GLuint name                                        \
    ))GL_ENTRY_PTR(glPushName_Idx))


GLAPI void  APIENTRY glPushName(GLuint name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPushName_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushName_wrp(name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushName_Idx) ++;

        GL_ENTRY_LAST_TS(glPushName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushName_Idx),
				 GL_ENTRY_LAST_TS(glPushName_Idx));


        if(last_diff > 1000000000){
            printf("glPushName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushName_Idx),
	             GL_ENTRY_CALL_TIME(glPushName_Idx),
	             GL_ENTRY_CALL_TIME(glPushName_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushName_Idx) = get_ts();
        }


	

}