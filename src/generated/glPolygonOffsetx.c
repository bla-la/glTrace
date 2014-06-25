#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonOffsetx_wrp						\
    ((void  (*)(GLfixed factor,GLfixed units                                        \
    ))GL_ENTRY_PTR(glPolygonOffsetx_Idx))


GLAPI void  APIENTRY glPolygonOffsetx(GLfixed factor,GLfixed units)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPolygonOffsetx_Idx))
	{
            GL_ENTRY_PTR(glPolygonOffsetx_Idx) = dlsym(RTLD_NEXT,"glPolygonOffsetx");
            if(!GL_ENTRY_PTR(glPolygonOffsetx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPolygonOffsetx_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonOffsetx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonOffsetx_wrp(factor,units);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonOffsetx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonOffsetx_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonOffsetx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonOffsetx_Idx),
				 GL_ENTRY_LAST_TS(glPolygonOffsetx_Idx));
        if(last_diff > 1000000000){
            printf("glPolygonOffsetx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetx_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetx_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetx_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonOffsetx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonOffsetx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonOffsetx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonOffsetx_Idx) = get_ts();
        }


	

}