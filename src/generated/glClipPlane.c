#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlane_wrp						\
    ((void  (*)(GLenum plane,const GLdouble *equation                                        \
    ))GL_ENTRY_PTR(glClipPlane_Idx))


GLAPI void  APIENTRY glClipPlane(GLenum plane,const GLdouble *equation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClipPlane_Idx))
	{
            GL_ENTRY_PTR(glClipPlane_Idx) = dlsym(RTLD_NEXT,"glClipPlane");
            if(!GL_ENTRY_PTR(glClipPlane_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClipPlane_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlane_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlane_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlane_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlane_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlane_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlane_Idx),
				 GL_ENTRY_LAST_TS(glClipPlane_Idx));
        if(last_diff > 1000000000){
            printf("glClipPlane %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlane_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlane_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlane_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlane_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlane_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlane_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlane_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlane_Idx) = get_ts();
        }


	

}