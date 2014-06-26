#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoui64vNV_wrp						\
    ((void  (*)(GLuint video_slot,GLenum pname,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetVideoui64vNV_Idx))


GLAPI void  APIENTRY glGetVideoui64vNV(GLuint video_slot,GLenum pname,GLuint64EXT *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVideoui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoui64vNV_wrp(video_slot,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoui64vNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVideoui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoui64vNV_Idx) = get_ts();
        }


	

}