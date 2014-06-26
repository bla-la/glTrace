#include <glTraceCommon.h>
#include <generated.h>

#define glPixelStorex_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glPixelStorex_Idx))


GLAPI void  APIENTRY glPixelStorex(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelStorex_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelStorex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelStorex_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelStorex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelStorex_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelStorex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelStorex_Idx),
				 GL_ENTRY_LAST_TS(glPixelStorex_Idx));


        if(last_diff > 1000000000){
            printf("glPixelStorex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelStorex_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStorex_Idx),
	             GL_ENTRY_CALL_TIME(glPixelStorex_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelStorex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelStorex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelStorex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelStorex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelStorex_Idx) = get_ts();
        }


	

}