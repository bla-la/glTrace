#include <glTraceCommon.h>
#include <generated.h>

#define glFrustumf_wrp						\
    ((void  (*)(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f                                        \
    ))GL_ENTRY_PTR(glFrustumf_Idx))


GLAPI void  APIENTRY glFrustumf(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFrustumf_Idx))
	{
            GL_ENTRY_PTR(glFrustumf_Idx) = dlsym(RTLD_NEXT,"glFrustumf");
            if(!GL_ENTRY_PTR(glFrustumf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFrustumf_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrustumf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrustumf_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrustumf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrustumf_Idx) ++;

        GL_ENTRY_LAST_TS(glFrustumf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrustumf_Idx),
				 GL_ENTRY_LAST_TS(glFrustumf_Idx));
        if(last_diff > 1000000000){
            printf("glFrustumf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrustumf_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumf_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumf_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrustumf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrustumf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrustumf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrustumf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrustumf_Idx) = get_ts();
        }


	

}