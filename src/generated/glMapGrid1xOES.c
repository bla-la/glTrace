#include <glTraceCommon.h>
#include <generated.h>

#define glMapGrid1xOES_wrp						\
    ((void  (*)(GLint n,GLfixed u1,GLfixed u2                                        \
    ))GL_ENTRY_PTR(glMapGrid1xOES_Idx))


GLAPI void  APIENTRY glMapGrid1xOES(GLint n,GLfixed u1,GLfixed u2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapGrid1xOES_Idx))
	{
            GL_ENTRY_PTR(glMapGrid1xOES_Idx) = dlsym(RTLD_NEXT,"glMapGrid1xOES");
            if(!GL_ENTRY_PTR(glMapGrid1xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapGrid1xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapGrid1xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapGrid1xOES_wrp(n,u1,u2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapGrid1xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapGrid1xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMapGrid1xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapGrid1xOES_Idx),
				 GL_ENTRY_LAST_TS(glMapGrid1xOES_Idx));
        if(last_diff > 1000000000){
            printf("glMapGrid1xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapGrid1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid1xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapGrid1xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapGrid1xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapGrid1xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapGrid1xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapGrid1xOES_Idx) = get_ts();
        }


	

}