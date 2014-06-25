#include <glTraceCommon.h>
#include <generated.h>

#define glGetFogFuncSGIS_wrp						\
    ((void  (*)(GLfloat *points                                        \
    ))GL_ENTRY_PTR(glGetFogFuncSGIS_Idx))


GLAPI void  APIENTRY glGetFogFuncSGIS(GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFogFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glGetFogFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glGetFogFuncSGIS");
            if(!GL_ENTRY_PTR(glGetFogFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFogFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFogFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFogFuncSGIS_wrp(points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFogFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFogFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFogFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFogFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetFogFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glGetFogFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFogFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetFogFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetFogFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFogFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFogFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFogFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFogFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFogFuncSGIS_Idx) = get_ts();
        }


	

}