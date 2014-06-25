#include <glTraceCommon.h>
#include <generated.h>

#define glFrustum_wrp						\
    ((void  (*)(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar                                        \
    ))GL_ENTRY_PTR(glFrustum_Idx))


GLAPI void  APIENTRY glFrustum(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFrustum_Idx))
	{
            GL_ENTRY_PTR(glFrustum_Idx) = dlsym(RTLD_NEXT,"glFrustum");
            if(!GL_ENTRY_PTR(glFrustum_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFrustum_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrustum_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrustum_wrp(left,right,bottom,top,zNear,zFar);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrustum_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrustum_Idx) ++;

        GL_ENTRY_LAST_TS(glFrustum_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrustum_Idx),
				 GL_ENTRY_LAST_TS(glFrustum_Idx));
        if(last_diff > 1000000000){
            printf("glFrustum %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrustum_Idx),
	             GL_ENTRY_CALL_TIME(glFrustum_Idx),
	             GL_ENTRY_CALL_TIME(glFrustum_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrustum_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrustum_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrustum_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrustum_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrustum_Idx) = get_ts();
        }


	

}