#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribFormat_wrp						\
    ((void  (*)(GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset                                        \
    ))GL_ENTRY_PTR(glVertexAttribFormat_Idx))


GLAPI void  APIENTRY glVertexAttribFormat(GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribFormat_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribFormat_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribFormat_wrp(attribindex,size,type,normalized,relativeoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribFormat_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribFormat_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribFormat_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribFormat_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribFormat_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribFormat %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribFormat_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribFormat_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribFormat_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribFormat_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribFormat_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribFormat_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribFormat_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribFormat_Idx) = get_ts();
        }


	

}