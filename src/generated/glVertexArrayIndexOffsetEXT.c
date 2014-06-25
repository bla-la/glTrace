#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayIndexOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayIndexOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayIndexOffsetEXT(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayIndexOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayIndexOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayIndexOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayIndexOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayIndexOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayIndexOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayIndexOffsetEXT_wrp(vaobj,buffer,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayIndexOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayIndexOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayIndexOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayIndexOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayIndexOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayIndexOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayIndexOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayIndexOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayIndexOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayIndexOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayIndexOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayIndexOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayIndexOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayIndexOffsetEXT_Idx) = get_ts();
        }


	

}