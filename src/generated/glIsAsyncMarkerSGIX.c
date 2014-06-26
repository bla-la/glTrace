#include <glTraceCommon.h>
#include <generated.h>

#define glIsAsyncMarkerSGIX_wrp						\
    ((GLboolean  (*)(GLuint marker                                        \
    ))GL_ENTRY_PTR(glIsAsyncMarkerSGIX_Idx))


GLAPI GLboolean  APIENTRY glIsAsyncMarkerSGIX(GLuint marker)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsAsyncMarkerSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsAsyncMarkerSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsAsyncMarkerSGIX_wrp(marker);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsAsyncMarkerSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsAsyncMarkerSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glIsAsyncMarkerSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsAsyncMarkerSGIX_Idx),
				 GL_ENTRY_LAST_TS(glIsAsyncMarkerSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glIsAsyncMarkerSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsAsyncMarkerSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glIsAsyncMarkerSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glIsAsyncMarkerSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsAsyncMarkerSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsAsyncMarkerSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsAsyncMarkerSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsAsyncMarkerSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsAsyncMarkerSGIX_Idx) = get_ts();
        }


	return retval;

}