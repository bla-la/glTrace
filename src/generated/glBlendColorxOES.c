#include <glTraceCommon.h>
#include <generated.h>

#define glBlendColorxOES_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glBlendColorxOES_Idx))


GLAPI void  APIENTRY glBlendColorxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendColorxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendColorxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendColorxOES_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendColorxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendColorxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendColorxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendColorxOES_Idx),
				 GL_ENTRY_LAST_TS(glBlendColorxOES_Idx));


        if(last_diff > 1000000000){
            printf("glBlendColorxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendColorxOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColorxOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColorxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendColorxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendColorxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendColorxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendColorxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendColorxOES_Idx) = get_ts();
        }


	

}