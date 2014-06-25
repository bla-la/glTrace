#include <glTraceCommon.h>
#include <generated.h>

#define glDetailTexFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLsizei n,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glDetailTexFuncSGIS_Idx))


GLAPI void  APIENTRY glDetailTexFuncSGIS(GLenum target,GLsizei n,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDetailTexFuncSGIS_Idx))
	{
            GL_ENTRY_PTR(glDetailTexFuncSGIS_Idx) = dlsym(RTLD_NEXT,"glDetailTexFuncSGIS");
            if(!GL_ENTRY_PTR(glDetailTexFuncSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDetailTexFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glDetailTexFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDetailTexFuncSGIS_wrp(target,n,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDetailTexFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDetailTexFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glDetailTexFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDetailTexFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glDetailTexFuncSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glDetailTexFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDetailTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glDetailTexFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glDetailTexFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glDetailTexFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDetailTexFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDetailTexFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDetailTexFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDetailTexFuncSGIS_Idx) = get_ts();
        }


	

}