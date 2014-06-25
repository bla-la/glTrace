#include <glTraceCommon.h>
#include <generated.h>

#define glColor4x_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glColor4x_Idx))


GLAPI void  APIENTRY glColor4x(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4x_Idx))
	{
            GL_ENTRY_PTR(glColor4x_Idx) = dlsym(RTLD_NEXT,"glColor4x");
            if(!GL_ENTRY_PTR(glColor4x_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4x_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4x_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4x_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4x_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4x_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4x_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4x_Idx),
				 GL_ENTRY_LAST_TS(glColor4x_Idx));
        if(last_diff > 1000000000){
            printf("glColor4x %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4x_Idx),
	             GL_ENTRY_CALL_TIME(glColor4x_Idx),
	             GL_ENTRY_CALL_TIME(glColor4x_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4x_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4x_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4x_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4x_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4x_Idx) = get_ts();
        }


	

}