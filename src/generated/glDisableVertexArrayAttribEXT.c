#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVertexArrayAttribEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableVertexArrayAttribEXT_Idx))


GLAPI void  APIENTRY glDisableVertexArrayAttribEXT(GLuint vaobj,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableVertexArrayAttribEXT_Idx))
	{
            GL_ENTRY_PTR(glDisableVertexArrayAttribEXT_Idx) = dlsym(RTLD_NEXT,"glDisableVertexArrayAttribEXT");
            if(!GL_ENTRY_PTR(glDisableVertexArrayAttribEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableVertexArrayAttribEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVertexArrayAttribEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVertexArrayAttribEXT_wrp(vaobj,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVertexArrayAttribEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVertexArrayAttribEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVertexArrayAttribEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVertexArrayAttribEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableVertexArrayAttribEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDisableVertexArrayAttribEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVertexArrayAttribEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexArrayAttribEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexArrayAttribEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVertexArrayAttribEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVertexArrayAttribEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVertexArrayAttribEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVertexArrayAttribEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVertexArrayAttribEXT_Idx) = get_ts();
        }


	

}