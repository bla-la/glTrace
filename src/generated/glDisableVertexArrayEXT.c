#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVertexArrayEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLenum array                                        \
    ))GL_ENTRY_PTR(glDisableVertexArrayEXT_Idx))


GLAPI void  APIENTRY glDisableVertexArrayEXT(GLuint vaobj,GLenum array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDisableVertexArrayEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVertexArrayEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVertexArrayEXT_wrp(vaobj,array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVertexArrayEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVertexArrayEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVertexArrayEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVertexArrayEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableVertexArrayEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDisableVertexArrayEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVertexArrayEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexArrayEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexArrayEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVertexArrayEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVertexArrayEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVertexArrayEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVertexArrayEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVertexArrayEXT_Idx) = get_ts();
        }


	

}