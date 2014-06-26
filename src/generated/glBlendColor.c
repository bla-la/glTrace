#include <glTraceCommon.h>
#include <generated.h>

#define glBlendColor_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha                                        \
    ))GL_ENTRY_PTR(glBlendColor_Idx))


GLAPI void  APIENTRY glBlendColor(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendColor_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendColor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendColor_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendColor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendColor_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendColor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendColor_Idx),
				 GL_ENTRY_LAST_TS(glBlendColor_Idx));


        if(last_diff > 1000000000){
            printf("glBlendColor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendColor_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColor_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColor_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendColor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendColor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendColor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendColor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendColor_Idx) = get_ts();
        }


	

}