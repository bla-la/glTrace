#include <glTraceCommon.h>
#include <generated.h>

#define glColor4hNV_wrp						\
    ((void  (*)(GLhalfNV red,GLhalfNV green,GLhalfNV blue,GLhalfNV alpha                                        \
    ))GL_ENTRY_PTR(glColor4hNV_Idx))


GLAPI void  APIENTRY glColor4hNV(GLhalfNV red,GLhalfNV green,GLhalfNV blue,GLhalfNV alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor4hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4hNV_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4hNV_Idx),
				 GL_ENTRY_LAST_TS(glColor4hNV_Idx));


        if(last_diff > 1000000000){
            printf("glColor4hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glColor4hNV_Idx),
	             GL_ENTRY_CALL_TIME(glColor4hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4hNV_Idx) = get_ts();
        }


	

}