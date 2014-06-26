#include <glTraceCommon.h>
#include <generated.h>

#define glGetClipPlane_wrp						\
    ((void  (*)(GLenum plane,GLdouble *equation                                        \
    ))GL_ENTRY_PTR(glGetClipPlane_Idx))


GLAPI void  APIENTRY glGetClipPlane(GLenum plane,GLdouble *equation)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetClipPlane_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetClipPlane_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetClipPlane_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetClipPlane_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetClipPlane_Idx) ++;

        GL_ENTRY_LAST_TS(glGetClipPlane_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetClipPlane_Idx),
				 GL_ENTRY_LAST_TS(glGetClipPlane_Idx));


        if(last_diff > 1000000000){
            printf("glGetClipPlane %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetClipPlane_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlane_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlane_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetClipPlane_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetClipPlane_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetClipPlane_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetClipPlane_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetClipPlane_Idx) = get_ts();
        }


	

}