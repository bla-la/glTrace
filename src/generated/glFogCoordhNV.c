#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordhNV_wrp						\
    ((void  (*)(GLhalfNV fog                                        \
    ))GL_ENTRY_PTR(glFogCoordhNV_Idx))


GLAPI void  APIENTRY glFogCoordhNV(GLhalfNV fog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordhNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordhNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordhNV_wrp(fog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordhNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordhNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordhNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordhNV_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordhNV_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordhNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordhNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordhNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordhNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordhNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordhNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordhNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordhNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordhNV_Idx) = get_ts();
        }


	

}