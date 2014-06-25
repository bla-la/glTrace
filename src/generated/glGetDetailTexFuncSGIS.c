#include <glTraceCommon.h>
#include <generated.h>

#define glGetDetailTexFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLfloat *points                                        \
    ))GL_ENTRY_PTR(glGetDetailTexFuncSGIS_Idx))


GLAPI void  APIENTRY glGetDetailTexFuncSGIS(GLenum target,GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetDetailTexFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glGetDetailTexFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glGetDetailTexFuncSGIS");
            if(!GL_ENTRY_PTR(glGetDetailTexFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetDetailTexFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDetailTexFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDetailTexFuncSGIS_wrp(target,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDetailTexFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDetailTexFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDetailTexFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDetailTexFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetDetailTexFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glGetDetailTexFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDetailTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetDetailTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetDetailTexFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDetailTexFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDetailTexFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDetailTexFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDetailTexFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDetailTexFuncSGIS_Idx) = get_ts();
        }


	

}