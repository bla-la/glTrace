#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribLFormat_wrp						\
    ((void  (*)(GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset                                        \
    ))GL_ENTRY_PTR(glVertexAttribLFormat_Idx))


GLAPI void  APIENTRY glVertexAttribLFormat(GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribLFormat_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribLFormat_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribLFormat_wrp(attribindex,size,type,relativeoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribLFormat_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribLFormat_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribLFormat_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribLFormat_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribLFormat_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribLFormat %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribLFormat_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLFormat_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLFormat_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribLFormat_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribLFormat_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribLFormat_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribLFormat_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribLFormat_Idx) = get_ts();
        }


	

}