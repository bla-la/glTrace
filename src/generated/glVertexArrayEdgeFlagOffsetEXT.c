#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayEdgeFlagOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayEdgeFlagOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj,GLuint buffer,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayEdgeFlagOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayEdgeFlagOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayEdgeFlagOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayEdgeFlagOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayEdgeFlagOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayEdgeFlagOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayEdgeFlagOffsetEXT_wrp(vaobj,buffer,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayEdgeFlagOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayEdgeFlagOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayEdgeFlagOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayEdgeFlagOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayEdgeFlagOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayEdgeFlagOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayEdgeFlagOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayEdgeFlagOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayEdgeFlagOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayEdgeFlagOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayEdgeFlagOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayEdgeFlagOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayEdgeFlagOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayEdgeFlagOffsetEXT_Idx) = get_ts();
        }


	

}