#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayMultiTexCoordOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLenum texunit,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayMultiTexCoordOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj,GLuint buffer,GLenum texunit,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayMultiTexCoordOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayMultiTexCoordOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayMultiTexCoordOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayMultiTexCoordOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayMultiTexCoordOffsetEXT_wrp(vaobj,buffer,texunit,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayMultiTexCoordOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayMultiTexCoordOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayMultiTexCoordOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayMultiTexCoordOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayMultiTexCoordOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayMultiTexCoordOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayMultiTexCoordOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayMultiTexCoordOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayMultiTexCoordOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayMultiTexCoordOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayMultiTexCoordOffsetEXT_Idx) = get_ts();
        }


	

}