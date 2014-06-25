#include <glTraceCommon.h>
#include <generated.h>

#define glMapVertexAttrib1dAPPLE_wrp						\
    ((void  (*)(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points                                        \
    ))GL_ENTRY_PTR(glMapVertexAttrib1dAPPLE_Idx))


GLAPI void  APIENTRY glMapVertexAttrib1dAPPLE(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint stride,GLint order,const GLdouble *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapVertexAttrib1dAPPLE_Idx))
	{
            GL_ENTRY_PTR(glMapVertexAttrib1dAPPLE_Idx) = dlsym(RTLD_NEXT,"glMapVertexAttrib1dAPPLE");
            if(!GL_ENTRY_PTR(glMapVertexAttrib1dAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapVertexAttrib1dAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapVertexAttrib1dAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapVertexAttrib1dAPPLE_wrp(index,size,u1,u2,stride,order,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapVertexAttrib1dAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapVertexAttrib1dAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMapVertexAttrib1dAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapVertexAttrib1dAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMapVertexAttrib1dAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glMapVertexAttrib1dAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1dAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib1dAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib1dAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1dAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapVertexAttrib1dAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapVertexAttrib1dAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapVertexAttrib1dAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapVertexAttrib1dAPPLE_Idx) = get_ts();
        }


	

}