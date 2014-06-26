#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexArrayIntegervEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLenum pname,GLint *param                                        \
    ))GL_ENTRY_PTR(glGetVertexArrayIntegervEXT_Idx))


GLAPI void  APIENTRY glGetVertexArrayIntegervEXT(GLuint vaobj,GLenum pname,GLint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexArrayIntegervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexArrayIntegervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexArrayIntegervEXT_wrp(vaobj,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexArrayIntegervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexArrayIntegervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexArrayIntegervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexArrayIntegervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexArrayIntegervEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexArrayIntegervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayIntegervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayIntegervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexArrayIntegervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexArrayIntegervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexArrayIntegervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexArrayIntegervEXT_Idx) = get_ts();
        }


	

}