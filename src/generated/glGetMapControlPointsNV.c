#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapControlPointsNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLboolean packed,void *points                                        \
    ))GL_ENTRY_PTR(glGetMapControlPointsNV_Idx))


GLAPI void  APIENTRY glGetMapControlPointsNV(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLboolean packed,void *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMapControlPointsNV_Idx))
	{
            GL_ENTRY_PTR(glGetMapControlPointsNV_Idx) = dlsym(RTLD_NEXT,"glGetMapControlPointsNV");
            if(!GL_ENTRY_PTR(glGetMapControlPointsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMapControlPointsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapControlPointsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapControlPointsNV_wrp(target,index,type,ustride,vstride,packed,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapControlPointsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapControlPointsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapControlPointsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapControlPointsNV_Idx),
				 GL_ENTRY_LAST_TS(glGetMapControlPointsNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetMapControlPointsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapControlPointsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapControlPointsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapControlPointsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapControlPointsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapControlPointsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapControlPointsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapControlPointsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapControlPointsNV_Idx) = get_ts();
        }


	

}