#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonStipple_wrp						\
    ((void  (*)(const GLubyte *mask                                        \
    ))GL_ENTRY_PTR(glPolygonStipple_Idx))


GLAPI void  APIENTRY glPolygonStipple(const GLubyte *mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPolygonStipple_Idx))
	{
            GL_ENTRY_PTR(glPolygonStipple_Idx) = dlsym(RTLD_NEXT,"glPolygonStipple");
            if(!GL_ENTRY_PTR(glPolygonStipple_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPolygonStipple_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonStipple_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonStipple_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonStipple_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonStipple_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonStipple_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonStipple_Idx),
				 GL_ENTRY_LAST_TS(glPolygonStipple_Idx));
        if(last_diff > 1000000000){
            printf("glPolygonStipple %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonStipple_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonStipple_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonStipple_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonStipple_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonStipple_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonStipple_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonStipple_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonStipple_Idx) = get_ts();
        }


	

}