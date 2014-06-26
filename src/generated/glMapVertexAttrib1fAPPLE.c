#include <glTraceCommon.h>
#include <generated.h>

#define glMapVertexAttrib1fAPPLE_wrp						\
    ((void  (*)(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glMapVertexAttrib1fAPPLE_Idx))


GLAPI void  APIENTRY glMapVertexAttrib1fAPPLE(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint stride,GLint order,const GLfloat *points)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapVertexAttrib1fAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapVertexAttrib1fAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapVertexAttrib1fAPPLE_wrp(index,size,u1,u2,stride,order,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapVertexAttrib1fAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapVertexAttrib1fAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMapVertexAttrib1fAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapVertexAttrib1fAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMapVertexAttrib1fAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glMapVertexAttrib1fAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1fAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib1fAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib1fAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1fAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapVertexAttrib1fAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1fAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapVertexAttrib1fAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapVertexAttrib1fAPPLE_Idx) = get_ts();
        }


	

}