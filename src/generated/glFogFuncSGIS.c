#include <glTraceCommon.h>
#include <generated.h>

#define glFogFuncSGIS_wrp						\
    ((void  (*)(GLsizei n,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glFogFuncSGIS_Idx))


GLAPI void  APIENTRY glFogFuncSGIS(GLsizei n,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glFogFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glFogFuncSGIS");
            if(!GL_ENTRY_PTR(glFogFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogFuncSGIS_wrp(n,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glFogFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glFogFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glFogFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glFogFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glFogFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogFuncSGIS_Idx) = get_ts();
        }


	

}