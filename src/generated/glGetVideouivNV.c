#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideouivNV_wrp						\
    ((void  (*)(GLuint video_slot,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetVideouivNV_Idx))


GLAPI void  APIENTRY glGetVideouivNV(GLuint video_slot,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVideouivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideouivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideouivNV_wrp(video_slot,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideouivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideouivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideouivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideouivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideouivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVideouivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideouivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideouivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideouivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideouivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideouivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideouivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideouivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideouivNV_Idx) = get_ts();
        }


	

}