#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixFrustumEXT_wrp						\
    ((void  (*)(GLenum mode,GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar                                        \
    ))GL_ENTRY_PTR(glMatrixFrustumEXT_Idx))


GLAPI void  APIENTRY glMatrixFrustumEXT(GLenum mode,GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixFrustumEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixFrustumEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixFrustumEXT_wrp(mode,left,right,bottom,top,zNear,zFar);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixFrustumEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixFrustumEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixFrustumEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixFrustumEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixFrustumEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixFrustumEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixFrustumEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixFrustumEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixFrustumEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixFrustumEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixFrustumEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixFrustumEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixFrustumEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixFrustumEXT_Idx) = get_ts();
        }


	

}