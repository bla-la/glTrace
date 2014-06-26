#include <glTraceCommon.h>
#include <generated.h>

#define glLineStipple_wrp						\
    ((void  (*)(GLint factor,GLushort pattern                                        \
    ))GL_ENTRY_PTR(glLineStipple_Idx))


GLAPI void  APIENTRY glLineStipple(GLint factor,GLushort pattern)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLineStipple_Idx))
    	{
            GL_ENTRY_PREV_TS(glLineStipple_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLineStipple_wrp(factor,pattern);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLineStipple_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLineStipple_Idx) ++;

        GL_ENTRY_LAST_TS(glLineStipple_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLineStipple_Idx),
				 GL_ENTRY_LAST_TS(glLineStipple_Idx));


        if(last_diff > 1000000000){
            printf("glLineStipple %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLineStipple_Idx),
	             GL_ENTRY_CALL_TIME(glLineStipple_Idx),
	             GL_ENTRY_CALL_TIME(glLineStipple_Idx) /
	             GL_ENTRY_CALL_COUNT(glLineStipple_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLineStipple_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLineStipple_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLineStipple_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLineStipple_Idx) = get_ts();
        }


	

}