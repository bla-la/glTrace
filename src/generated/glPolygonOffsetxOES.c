#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonOffsetxOES_wrp						\
    ((void  (*)(GLfixed factor,GLfixed units                                        \
    ))GL_ENTRY_PTR(glPolygonOffsetxOES_Idx))


GLAPI void  APIENTRY glPolygonOffsetxOES(GLfixed factor,GLfixed units)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPolygonOffsetxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonOffsetxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonOffsetxOES_wrp(factor,units);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonOffsetxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonOffsetxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonOffsetxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonOffsetxOES_Idx),
				 GL_ENTRY_LAST_TS(glPolygonOffsetxOES_Idx));


        if(last_diff > 1000000000){
            printf("glPolygonOffsetxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonOffsetxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonOffsetxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonOffsetxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonOffsetxOES_Idx) = get_ts();
        }


	

}