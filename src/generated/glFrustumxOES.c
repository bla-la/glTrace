#include <glTraceCommon.h>
#include <generated.h>

#define glFrustumxOES_wrp						\
    ((void  (*)(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glFrustumxOES_Idx))


GLAPI void  APIENTRY glFrustumxOES(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFrustumxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFrustumxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFrustumxOES_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFrustumxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFrustumxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFrustumxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFrustumxOES_Idx),
				 GL_ENTRY_LAST_TS(glFrustumxOES_Idx));


        if(last_diff > 1000000000){
            printf("glFrustumxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFrustumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFrustumxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFrustumxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFrustumxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFrustumxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFrustumxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFrustumxOES_Idx) = get_ts();
        }


	

}