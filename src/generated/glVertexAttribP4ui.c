#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribP4ui_wrp						\
    ((void  (*)(GLuint index,GLenum type,GLboolean normalized,GLuint value                                        \
    ))GL_ENTRY_PTR(glVertexAttribP4ui_Idx))


GLAPI void  APIENTRY glVertexAttribP4ui(GLuint index,GLenum type,GLboolean normalized,GLuint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribP4ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribP4ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribP4ui_wrp(index,type,normalized,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribP4ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribP4ui_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribP4ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribP4ui_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribP4ui_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribP4ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribP4ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribP4ui_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribP4ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribP4ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribP4ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribP4ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribP4ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribP4ui_Idx) = get_ts();
        }


	

}