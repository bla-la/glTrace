#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteAsyncMarkersSGIX_wrp						\
    ((void  (*)(GLuint marker,GLsizei range                                        \
    ))GL_ENTRY_PTR(glDeleteAsyncMarkersSGIX_Idx))


GLAPI void  APIENTRY glDeleteAsyncMarkersSGIX(GLuint marker,GLsizei range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteAsyncMarkersSGIX_Idx))
	{
            GL_ENTRY_PTR(glDeleteAsyncMarkersSGIX_Idx) = dlsym(RTLD_NEXT,"glDeleteAsyncMarkersSGIX");
            if(!GL_ENTRY_PTR(glDeleteAsyncMarkersSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteAsyncMarkersSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteAsyncMarkersSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteAsyncMarkersSGIX_wrp(marker,range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteAsyncMarkersSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteAsyncMarkersSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteAsyncMarkersSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteAsyncMarkersSGIX_Idx),
				 GL_ENTRY_LAST_TS(glDeleteAsyncMarkersSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteAsyncMarkersSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteAsyncMarkersSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteAsyncMarkersSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteAsyncMarkersSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteAsyncMarkersSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteAsyncMarkersSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteAsyncMarkersSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteAsyncMarkersSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteAsyncMarkersSGIX_Idx) = get_ts();
        }


	

}