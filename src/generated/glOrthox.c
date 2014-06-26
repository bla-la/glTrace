#include <glTraceCommon.h>
#include <generated.h>

#define glOrthox_wrp						\
    ((void  (*)(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glOrthox_Idx))


GLAPI void  APIENTRY glOrthox(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glOrthox_Idx))
    	{
            GL_ENTRY_PREV_TS(glOrthox_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glOrthox_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glOrthox_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glOrthox_Idx) ++;

        GL_ENTRY_LAST_TS(glOrthox_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glOrthox_Idx),
				 GL_ENTRY_LAST_TS(glOrthox_Idx));


        if(last_diff > 1000000000){
            printf("glOrthox %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glOrthox_Idx),
	             GL_ENTRY_CALL_TIME(glOrthox_Idx),
	             GL_ENTRY_CALL_TIME(glOrthox_Idx) /
	             GL_ENTRY_CALL_COUNT(glOrthox_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glOrthox_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glOrthox_Idx) = 0;
             GL_ENTRY_CALL_TIME(glOrthox_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glOrthox_Idx) = get_ts();
        }


	

}