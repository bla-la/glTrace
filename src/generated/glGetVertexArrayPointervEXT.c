#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexArrayPointervEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLenum pname,void **param                                        \
    ))GL_ENTRY_PTR(glGetVertexArrayPointervEXT_Idx))


GLAPI void  APIENTRY glGetVertexArrayPointervEXT(GLuint vaobj,GLenum pname,void **param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexArrayPointervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexArrayPointervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexArrayPointervEXT_wrp(vaobj,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexArrayPointervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexArrayPointervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexArrayPointervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexArrayPointervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexArrayPointervEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexArrayPointervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexArrayPointervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexArrayPointervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexArrayPointervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexArrayPointervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexArrayPointervEXT_Idx) = get_ts();
        }


	

}