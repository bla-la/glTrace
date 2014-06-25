#include <glTraceCommon.h>
#include <generated.h>

#define glDeformationMap3dSGIX_wrp						\
    ((void  (*)(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,GLdouble w1,GLdouble w2,GLint wstride,GLint worder,const GLdouble *points                                        \
    ))GL_ENTRY_PTR(glDeformationMap3dSGIX_Idx))


GLAPI void  APIENTRY glDeformationMap3dSGIX(GLenum target,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,GLdouble w1,GLdouble w2,GLint wstride,GLint worder,const GLdouble *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeformationMap3dSGIX_Idx))
	{
            GL_ENTRY_PTR(glDeformationMap3dSGIX_Idx) = dlsym(RTLD_NEXT,"glDeformationMap3dSGIX");
            if(!GL_ENTRY_PTR(glDeformationMap3dSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeformationMap3dSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeformationMap3dSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeformationMap3dSGIX_wrp(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,w1,w2,wstride,worder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeformationMap3dSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeformationMap3dSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glDeformationMap3dSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeformationMap3dSGIX_Idx),
				 GL_ENTRY_LAST_TS(glDeformationMap3dSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glDeformationMap3dSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeformationMap3dSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformationMap3dSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformationMap3dSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeformationMap3dSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeformationMap3dSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeformationMap3dSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeformationMap3dSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeformationMap3dSGIX_Idx) = get_ts();
        }


	

}