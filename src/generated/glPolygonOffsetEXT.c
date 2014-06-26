#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonOffsetEXT_wrp						\
    ((void  (*)(GLfloat factor,GLfloat bias                                        \
    ))GL_ENTRY_PTR(glPolygonOffsetEXT_Idx))


GLAPI void  APIENTRY glPolygonOffsetEXT(GLfloat factor,GLfloat bias)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPolygonOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonOffsetEXT_wrp(factor,bias);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glPolygonOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPolygonOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonOffsetEXT_Idx) = get_ts();
        }


	

}