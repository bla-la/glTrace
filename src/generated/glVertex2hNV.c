#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2hNV_wrp						\
    ((void  (*)(GLhalfNV x,GLhalfNV y                                        \
    ))GL_ENTRY_PTR(glVertex2hNV_Idx))


GLAPI void  APIENTRY glVertex2hNV(GLhalfNV x,GLhalfNV y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertex2hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2hNV_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertex2hNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertex2hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2hNV_Idx) = get_ts();
        }


	

}