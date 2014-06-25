#include <glTraceCommon.h>
#include <generated.h>

#define glSharpenTexFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLsizei n,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glSharpenTexFuncSGIS_Idx))


GLAPI void  APIENTRY glSharpenTexFuncSGIS(GLenum target,GLsizei n,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSharpenTexFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glSharpenTexFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glSharpenTexFuncSGIS");
            if(!GL_ENTRY_PTR(glSharpenTexFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSharpenTexFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glSharpenTexFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSharpenTexFuncSGIS_wrp(target,n,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSharpenTexFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSharpenTexFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glSharpenTexFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSharpenTexFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glSharpenTexFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glSharpenTexFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSharpenTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSharpenTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSharpenTexFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glSharpenTexFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSharpenTexFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSharpenTexFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSharpenTexFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSharpenTexFuncSGIS_Idx) = get_ts();
        }


	

}