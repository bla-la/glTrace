#include <glTraceCommon.h>
#include <generated.h>

#define glColor4xOES_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glColor4xOES_Idx))


GLAPI void  APIENTRY glColor4xOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4xOES_Idx))
	{
            GL_ENTRY_PTR(glColor4xOES_Idx) = dlsym(RTLD_NEXT,"glColor4xOES");
            if(!GL_ENTRY_PTR(glColor4xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4xOES_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4xOES_Idx),
				 GL_ENTRY_LAST_TS(glColor4xOES_Idx));
        if(last_diff > 1000000000){
            printf("glColor4xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor4xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4xOES_Idx) = get_ts();
        }


	

}