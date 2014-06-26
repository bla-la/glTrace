#include <glTraceCommon.h>
#include <generated.h>

#define glStringMarkerGREMEDY_wrp						\
    ((void  (*)(GLsizei len,const void *string                                        \
    ))GL_ENTRY_PTR(glStringMarkerGREMEDY_Idx))


GLAPI void  APIENTRY glStringMarkerGREMEDY(GLsizei len,const void *string)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStringMarkerGREMEDY_Idx))
    	{
            GL_ENTRY_PREV_TS(glStringMarkerGREMEDY_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStringMarkerGREMEDY_wrp(len,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStringMarkerGREMEDY_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStringMarkerGREMEDY_Idx) ++;

        GL_ENTRY_LAST_TS(glStringMarkerGREMEDY_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStringMarkerGREMEDY_Idx),
				 GL_ENTRY_LAST_TS(glStringMarkerGREMEDY_Idx));


        if(last_diff > 1000000000){
            printf("glStringMarkerGREMEDY %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStringMarkerGREMEDY_Idx),
	             GL_ENTRY_CALL_TIME(glStringMarkerGREMEDY_Idx),
	             GL_ENTRY_CALL_TIME(glStringMarkerGREMEDY_Idx) /
	             GL_ENTRY_CALL_COUNT(glStringMarkerGREMEDY_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStringMarkerGREMEDY_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStringMarkerGREMEDY_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStringMarkerGREMEDY_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStringMarkerGREMEDY_Idx) = get_ts();
        }


	

}