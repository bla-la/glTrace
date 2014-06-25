#include <glTraceCommon.h>
#include <generated.h>

#define glColor3ui_wrp						\
    ((void  (*)(GLuint red,GLuint green,GLuint blue                                        \
    ))GL_ENTRY_PTR(glColor3ui_Idx))


GLAPI void  APIENTRY glColor3ui(GLuint red,GLuint green,GLuint blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3ui_Idx))
	{
            GL_ENTRY_PTR(glColor3ui_Idx) = dlsym(RTLD_NEXT,"glColor3ui");
            if(!GL_ENTRY_PTR(glColor3ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3ui_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3ui_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3ui_Idx),
				 GL_ENTRY_LAST_TS(glColor3ui_Idx));
        if(last_diff > 1000000000){
            printf("glColor3ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3ui_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ui_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3ui_Idx) = get_ts();
        }


	

}