#include <glTraceCommon.h>
#include <generated.h>

#define glMapVertexAttrib2dAPPLE_wrp						\
    ((void  (*)(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points                                        \
    ))GL_ENTRY_PTR(glMapVertexAttrib2dAPPLE_Idx))


GLAPI void  APIENTRY glMapVertexAttrib2dAPPLE(GLuint index,GLuint size,GLdouble u1,GLdouble u2,GLint ustride,GLint uorder,GLdouble v1,GLdouble v2,GLint vstride,GLint vorder,const GLdouble *points)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapVertexAttrib2dAPPLE_Idx))
	{
            GL_ENTRY_PTR(glMapVertexAttrib2dAPPLE_Idx) = dlsym(RTLD_NEXT,"glMapVertexAttrib2dAPPLE");
            if(!GL_ENTRY_PTR(glMapVertexAttrib2dAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapVertexAttrib2dAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapVertexAttrib2dAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapVertexAttrib2dAPPLE_wrp(index,size,u1,u2,ustride,uorder,v1,v2,vstride,vorder,points);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapVertexAttrib2dAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapVertexAttrib2dAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMapVertexAttrib2dAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapVertexAttrib2dAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMapVertexAttrib2dAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glMapVertexAttrib2dAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2dAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib2dAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMapVertexAttrib2dAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2dAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapVertexAttrib2dAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapVertexAttrib2dAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapVertexAttrib2dAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapVertexAttrib2dAPPLE_Idx) = get_ts();
        }


	

}