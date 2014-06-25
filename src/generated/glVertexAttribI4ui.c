#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4ui_wrp						\
    ((void  (*)(GLuint index,GLuint x,GLuint y,GLuint z,GLuint w                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4ui_Idx))


GLAPI void  APIENTRY glVertexAttribI4ui(GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI4ui_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI4ui_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI4ui");
            if(!GL_ENTRY_PTR(glVertexAttribI4ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI4ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4ui_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4ui_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI4ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4ui_Idx) = get_ts();
        }


	

}