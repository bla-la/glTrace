#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4hNV_wrp						\
    ((void  (*)(GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w                                        \
    ))GL_ENTRY_PTR(glVertex4hNV_Idx))


GLAPI void  APIENTRY glVertex4hNV(GLhalfNV x,GLhalfNV y,GLhalfNV z,GLhalfNV w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertex4hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4hNV_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertex4hNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertex4hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4hNV_Idx) = get_ts();
        }


	

}