#include <glTraceCommon.h>
#include <generated.h>

#define glMapVertexAttrib2fAPPLE_wrp						\
    ((void  (*)(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points                                        \
    ))GL_ENTRY_PTR(glMapVertexAttrib2fAPPLE_Idx))


GLAPI void  APIENTRY glMapVertexAttrib2fAPPLE(GLuint index,GLuint size,GLfloat u1,GLfloat u2,GLint ustride,GLint uorder,GLfloat v1,GLfloat v2,GLint vstride,GLint vorder,const GLfloat *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapVertexAttrib2fAPPLE_Idx))
	{
            GL_ENTRY_PTR(glMapVertexAttrib2fAPPLE_Idx) = dlsym(RTLD_NEXT,"glMapVertexAttrib2fAPPLE");
            if(!GL_ENTRY_PTR(glMapVertexAttrib2fAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapVertexAttrib2fAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapVertexAttrib2fAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapVertexAttrib2fAPPLE_wrp(index,size,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapVertexAttrib2fAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapVertexAttrib2fAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMapVertexAttrib2fAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapVertexAttrib2fAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMapVertexAttrib2fAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glMapVertexAttrib2fAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2fAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib2fAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib2fAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2fAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapVertexAttrib2fAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2fAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapVertexAttrib2fAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapVertexAttrib2fAPPLE_Idx) = get_ts();
        }


	

}