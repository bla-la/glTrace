#include <glTraceCommon.h>
#include <generated.h>

#define glFrustumx_wrp						\
    ((void  (*)(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glFrustumx_Idx))


GLAPI void  APIENTRY glFrustumx(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFrustumx_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrustumx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrustumx_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrustumx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrustumx_Idx) ++;

        GL_ENTRY_LAST_TS(glFrustumx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrustumx_Idx),
				 GL_ENTRY_LAST_TS(glFrustumx_Idx));


        if(last_diff > 1000000000){
            printf("glFrustumx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrustumx_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumx_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumx_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrustumx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrustumx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrustumx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrustumx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrustumx_Idx) = get_ts();
        }


	

}