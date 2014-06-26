#include <glTraceCommon.h>
#include <generated.h>

#define glAsyncMarkerSGIX_wrp						\
    ((void  (*)(GLuint marker                                        \
    ))GL_ENTRY_PTR(glAsyncMarkerSGIX_Idx))


GLAPI void  APIENTRY glAsyncMarkerSGIX(GLuint marker)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAsyncMarkerSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glAsyncMarkerSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAsyncMarkerSGIX_wrp(marker);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAsyncMarkerSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAsyncMarkerSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glAsyncMarkerSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAsyncMarkerSGIX_Idx),
				 GL_ENTRY_LAST_TS(glAsyncMarkerSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glAsyncMarkerSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAsyncMarkerSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glAsyncMarkerSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glAsyncMarkerSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glAsyncMarkerSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAsyncMarkerSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAsyncMarkerSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAsyncMarkerSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAsyncMarkerSGIX_Idx) = get_ts();
        }


	

}