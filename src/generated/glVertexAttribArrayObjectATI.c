#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribArrayObjectATI_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLuint buffer,GLuint offset                                        \
    ))GL_ENTRY_PTR(glVertexAttribArrayObjectATI_Idx))


GLAPI void  APIENTRY glVertexAttribArrayObjectATI(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLuint buffer,GLuint offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribArrayObjectATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribArrayObjectATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribArrayObjectATI_wrp(index,size,type,normalized,stride,buffer,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribArrayObjectATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribArrayObjectATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribArrayObjectATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribArrayObjectATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribArrayObjectATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribArrayObjectATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribArrayObjectATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribArrayObjectATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribArrayObjectATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribArrayObjectATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribArrayObjectATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribArrayObjectATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribArrayObjectATI_Idx) = get_ts();
        }


	

}