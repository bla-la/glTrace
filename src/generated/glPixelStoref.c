#include <glTraceCommon.h>
#include <generated.h>

#define glPixelStoref_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPixelStoref_Idx))


GLAPI void  APIENTRY glPixelStoref(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelStoref_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelStoref_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelStoref_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelStoref_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelStoref_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelStoref_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelStoref_Idx),
				 GL_ENTRY_LAST_TS(glPixelStoref_Idx));


        if(last_diff > 1000000000){
            printf("glPixelStoref %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelStoref_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStoref_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStoref_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelStoref_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelStoref_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelStoref_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelStoref_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelStoref_Idx) = get_ts();
        }


	

}