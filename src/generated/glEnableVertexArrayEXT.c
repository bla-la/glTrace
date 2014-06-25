#include <glTraceCommon.h>
#include <generated.h>

#define glEnableVertexArrayEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLenum array                                        \
    ))GL_ENTRY_PTR(glEnableVertexArrayEXT_Idx))


GLAPI void  APIENTRY glEnableVertexArrayEXT(GLuint vaobj,GLenum array)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEnableVertexArrayEXT_Idx))
	{
            GL_ENTRY_PTR(glEnableVertexArrayEXT_Idx) = dlsym(RTLD_NEXT,"glEnableVertexArrayEXT");
            if(!GL_ENTRY_PTR(glEnableVertexArrayEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEnableVertexArrayEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableVertexArrayEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableVertexArrayEXT_wrp(vaobj,array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableVertexArrayEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableVertexArrayEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableVertexArrayEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableVertexArrayEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableVertexArrayEXT_Idx));
        if(last_diff > 1000000000){
            printf("glEnableVertexArrayEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableVertexArrayEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexArrayEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexArrayEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableVertexArrayEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableVertexArrayEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableVertexArrayEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableVertexArrayEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableVertexArrayEXT_Idx) = get_ts();
        }


	

}