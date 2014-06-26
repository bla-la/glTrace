#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordd_wrp						\
    ((void  (*)(GLdouble coord                                        \
    ))GL_ENTRY_PTR(glFogCoordd_Idx))


GLAPI void  APIENTRY glFogCoordd(GLdouble coord)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordd_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordd_wrp(coord);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordd_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordd_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordd_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordd_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordd_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordd_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordd_Idx) = get_ts();
        }


	

}