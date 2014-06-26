#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordhvNV_wrp						\
    ((void  (*)(const GLhalfNV *fog                                        \
    ))GL_ENTRY_PTR(glFogCoordhvNV_Idx))


GLAPI void  APIENTRY glFogCoordhvNV(const GLhalfNV *fog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordhvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordhvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordhvNV_wrp(fog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordhvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordhvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordhvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordhvNV_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordhvNV_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordhvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordhvNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordhvNV_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordhvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordhvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordhvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordhvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordhvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordhvNV_Idx) = get_ts();
        }


	

}