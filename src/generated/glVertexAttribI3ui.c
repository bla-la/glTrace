#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI3ui_wrp						\
    ((void  (*)(GLuint index,GLuint x,GLuint y,GLuint z                                        \
    ))GL_ENTRY_PTR(glVertexAttribI3ui_Idx))


GLAPI void  APIENTRY glVertexAttribI3ui(GLuint index,GLuint x,GLuint y,GLuint z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI3ui_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI3ui_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI3ui");
            if(!GL_ENTRY_PTR(glVertexAttribI3ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI3ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI3ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI3ui_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI3ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI3ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI3ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI3ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI3ui_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI3ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI3ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI3ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI3ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI3ui_Idx) = get_ts();
        }


	

}