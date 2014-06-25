#include <glTraceCommon.h>
#include <generated.h>

#define glVertexP2ui_wrp						\
    ((void  (*)(GLenum type,GLuint value                                        \
    ))GL_ENTRY_PTR(glVertexP2ui_Idx))


GLAPI void  APIENTRY glVertexP2ui(GLenum type,GLuint value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexP2ui_Idx))
	{
            GL_ENTRY_PTR(glVertexP2ui_Idx) = dlsym(RTLD_NEXT,"glVertexP2ui");
            if(!GL_ENTRY_PTR(glVertexP2ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexP2ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexP2ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexP2ui_wrp(type,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexP2ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexP2ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexP2ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexP2ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexP2ui_Idx));
        if(last_diff > 1000000000){
            printf("glVertexP2ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexP2ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexP2ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexP2ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexP2ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexP2ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexP2ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexP2ui_Idx) = get_ts();
        }


	

}