#include <glTraceCommon.h>
#include <generated.h>

#define glTranslatexOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glTranslatexOES_Idx))


GLAPI void  APIENTRY glTranslatexOES(GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTranslatexOES_Idx))
	{
            GL_ENTRY_PTR(glTranslatexOES_Idx) = dlsym(RTLD_NEXT,"glTranslatexOES");
            if(!GL_ENTRY_PTR(glTranslatexOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTranslatexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTranslatexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTranslatexOES_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTranslatexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTranslatexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTranslatexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTranslatexOES_Idx),
				 GL_ENTRY_LAST_TS(glTranslatexOES_Idx));
        if(last_diff > 1000000000){
            printf("glTranslatexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTranslatexOES_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatexOES_Idx),
	             GL_ENTRY_CALL_TIME(glTranslatexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTranslatexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTranslatexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTranslatexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTranslatexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTranslatexOES_Idx) = get_ts();
        }


	

}