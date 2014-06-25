#include <glTraceCommon.h>
#include <generated.h>

#define glGetSharpenTexFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLfloat *points                                        \
    ))GL_ENTRY_PTR(glGetSharpenTexFuncSGIS_Idx))


GLAPI void  APIENTRY glGetSharpenTexFuncSGIS(GLenum target,GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetSharpenTexFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glGetSharpenTexFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glGetSharpenTexFuncSGIS");
            if(!GL_ENTRY_PTR(glGetSharpenTexFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetSharpenTexFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSharpenTexFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSharpenTexFuncSGIS_wrp(target,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSharpenTexFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSharpenTexFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSharpenTexFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSharpenTexFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetSharpenTexFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glGetSharpenTexFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSharpenTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetSharpenTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetSharpenTexFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSharpenTexFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSharpenTexFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSharpenTexFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSharpenTexFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSharpenTexFuncSGIS_Idx) = get_ts();
        }


	

}