#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoi64vNV_wrp						\
    ((void  (*)(GLuint video_slot,GLenum pname,GLint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetVideoi64vNV_Idx))


GLAPI void  APIENTRY glGetVideoi64vNV(GLuint video_slot,GLenum pname,GLint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVideoi64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetVideoi64vNV_Idx) = dlsym(RTLD_NEXT,"glGetVideoi64vNV");
            if(!GL_ENTRY_PTR(glGetVideoi64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVideoi64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoi64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoi64vNV_wrp(video_slot,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoi64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoi64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoi64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoi64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoi64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVideoi64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoi64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoi64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoi64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoi64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoi64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoi64vNV_Idx) = get_ts();
        }


	

}