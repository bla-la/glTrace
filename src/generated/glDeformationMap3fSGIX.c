#include <glTraceCommon.h>
#include <generated.h>

#define glDeformationMap3fSGIX_wrp						\
    ((void  (*)(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,GLfloat w1,GLfloat w2,GLint wstride,GLint worder,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glDeformationMap3fSGIX_Idx))


GLAPI void  APIENTRY glDeformationMap3fSGIX(GLenum target,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,GLfloat w1,GLfloat w2,GLint wstride,GLint worder,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeformationMap3fSGIX_Idx))
	{
            GL_ENTRY_PTR(glDeformationMap3fSGIX_Idx) = dlsym(RTLD_NEXT,"glDeformationMap3fSGIX");
            if(!GL_ENTRY_PTR(glDeformationMap3fSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeformationMap3fSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeformationMap3fSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeformationMap3fSGIX_wrp(target,u1,u2,ustride,uorder,v1,v2,vstride,vorder,w1,w2,wstride,worder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeformationMap3fSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeformationMap3fSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glDeformationMap3fSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeformationMap3fSGIX_Idx),
				 GL_ENTRY_LAST_TS(glDeformationMap3fSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glDeformationMap3fSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeformationMap3fSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformationMap3fSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glDeformationMap3fSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeformationMap3fSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeformationMap3fSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeformationMap3fSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeformationMap3fSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeformationMap3fSGIX_Idx) = get_ts();
        }


	

}