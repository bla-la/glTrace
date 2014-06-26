#include <glTraceCommon.h>
#include <generated.h>

#define glColor4ui_wrp						\
    ((void  (*)(GLuint red,GLuint green,GLuint blue,GLuint alpha                                        \
    ))GL_ENTRY_PTR(glColor4ui_Idx))


GLAPI void  APIENTRY glColor4ui(GLuint red,GLuint green,GLuint blue,GLuint alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColor4ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4ui_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4ui_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4ui_Idx),
				 GL_ENTRY_LAST_TS(glColor4ui_Idx));


        if(last_diff > 1000000000){
            printf("glColor4ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4ui_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ui_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4ui_Idx) = get_ts();
        }


	

}