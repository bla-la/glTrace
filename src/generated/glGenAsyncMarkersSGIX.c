#include <glTraceCommon.h>
#include <generated.h>

#define glGenAsyncMarkersSGIX_wrp						\
    ((GLuint  (*)(GLsizei range                                        \
    ))GL_ENTRY_PTR(glGenAsyncMarkersSGIX_Idx))


GLAPI GLuint  APIENTRY glGenAsyncMarkersSGIX(GLsizei range)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenAsyncMarkersSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenAsyncMarkersSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenAsyncMarkersSGIX_wrp(range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenAsyncMarkersSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenAsyncMarkersSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGenAsyncMarkersSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenAsyncMarkersSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGenAsyncMarkersSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glGenAsyncMarkersSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenAsyncMarkersSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGenAsyncMarkersSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGenAsyncMarkersSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenAsyncMarkersSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenAsyncMarkersSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenAsyncMarkersSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenAsyncMarkersSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenAsyncMarkersSGIX_Idx) = get_ts();
        }


	return retval;

}