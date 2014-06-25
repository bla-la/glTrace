#include <glTraceCommon.h>
#include <generated.h>

#define glMapControlPointsNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLint uorder,GLint vorder,GLboolean packed,const void *points                                        \
    ))GL_ENTRY_PTR(glMapControlPointsNV_Idx))


GLAPI void  APIENTRY glMapControlPointsNV(GLenum target,GLuint index,GLenum type,GLsizei ustride,GLsizei vstride,GLint uorder,GLint vorder,GLboolean packed,const void *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapControlPointsNV_Idx))
	{
            GL_ENTRY_PTR(glMapControlPointsNV_Idx) = dlsym(RTLD_NEXT,"glMapControlPointsNV");
            if(!GL_ENTRY_PTR(glMapControlPointsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapControlPointsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapControlPointsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapControlPointsNV_wrp(target,index,type,ustride,vstride,uorder,vorder,packed,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapControlPointsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapControlPointsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMapControlPointsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapControlPointsNV_Idx),
				 GL_ENTRY_LAST_TS(glMapControlPointsNV_Idx));
        if(last_diff > 1000000000){
            printf("glMapControlPointsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapControlPointsNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapControlPointsNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapControlPointsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapControlPointsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapControlPointsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapControlPointsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapControlPointsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapControlPointsNV_Idx) = get_ts();
        }


	

}