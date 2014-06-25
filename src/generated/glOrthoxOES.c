#include <glTraceCommon.h>
#include <generated.h>

#define glOrthoxOES_wrp						\
    ((void  (*)(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glOrthoxOES_Idx))


GLAPI void  APIENTRY glOrthoxOES(GLfixed l,GLfixed r,GLfixed b,GLfixed t,GLfixed n,GLfixed f)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glOrthoxOES_Idx))
	{
            GL_ENTRY_PTR(glOrthoxOES_Idx) = dlsym(RTLD_NEXT,"glOrthoxOES");
            if(!GL_ENTRY_PTR(glOrthoxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glOrthoxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glOrthoxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glOrthoxOES_wrp(l,r,b,t,n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glOrthoxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glOrthoxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glOrthoxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glOrthoxOES_Idx),
				 GL_ENTRY_LAST_TS(glOrthoxOES_Idx));
        if(last_diff > 1000000000){
            printf("glOrthoxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glOrthoxOES_Idx),
	             GL_ENTRY_CALL_TIME(glOrthoxOES_Idx),
	             GL_ENTRY_CALL_TIME(glOrthoxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glOrthoxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glOrthoxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glOrthoxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glOrthoxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glOrthoxOES_Idx) = get_ts();
        }


	

}