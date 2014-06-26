#include <glTraceCommon.h>
#include <generated.h>

#define glFrustumfOES_wrp						\
    ((void  (*)(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f                                        \
    ))GL_ENTRY_PTR(glFrustumfOES_Idx))


GLAPI void  APIENTRY glFrustumfOES(GLfloat l,GLfloat r,GLfloat b,GLfloat t,GLfloat n,GLfloat f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFrustumfOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrustumfOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrustumfOES_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrustumfOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrustumfOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFrustumfOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrustumfOES_Idx),
				 GL_ENTRY_LAST_TS(glFrustumfOES_Idx));


        if(last_diff > 1000000000){
            printf("glFrustumfOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrustumfOES_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumfOES_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumfOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrustumfOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrustumfOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrustumfOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrustumfOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrustumfOES_Idx) = get_ts();
        }


	

}