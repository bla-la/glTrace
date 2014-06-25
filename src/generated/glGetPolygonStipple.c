#include <glTraceCommon.h>
#include <generated.h>

#define glGetPolygonStipple_wrp						\
    ((void  (*)(GLubyte *mask                                        \
    ))GL_ENTRY_PTR(glGetPolygonStipple_Idx))


GLAPI void  APIENTRY glGetPolygonStipple(GLubyte *mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPolygonStipple_Idx))
	{
            GL_ENTRY_PTR(glGetPolygonStipple_Idx) = dlsym(RTLD_NEXT,"glGetPolygonStipple");
            if(!GL_ENTRY_PTR(glGetPolygonStipple_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPolygonStipple_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPolygonStipple_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPolygonStipple_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPolygonStipple_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPolygonStipple_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPolygonStipple_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPolygonStipple_Idx),
				 GL_ENTRY_LAST_TS(glGetPolygonStipple_Idx));
        if(last_diff > 1000000000){
            printf("glGetPolygonStipple %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPolygonStipple_Idx),
	             GL_ENTRY_CALL_TIME(glGetPolygonStipple_Idx),
	             GL_ENTRY_CALL_TIME(glGetPolygonStipple_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPolygonStipple_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPolygonStipple_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPolygonStipple_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPolygonStipple_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPolygonStipple_Idx) = get_ts();
        }


	

}