#include <glTraceCommon.h>
#include <generated.h>

#define glEnableVertexArrayAttribEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableVertexArrayAttribEXT_Idx))


GLAPI void  APIENTRY glEnableVertexArrayAttribEXT(GLuint vaobj,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEnableVertexArrayAttribEXT_Idx))
	{
            GL_ENTRY_PTR(glEnableVertexArrayAttribEXT_Idx) = dlsym(RTLD_NEXT,"glEnableVertexArrayAttribEXT");
            if(!GL_ENTRY_PTR(glEnableVertexArrayAttribEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEnableVertexArrayAttribEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableVertexArrayAttribEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableVertexArrayAttribEXT_wrp(vaobj,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableVertexArrayAttribEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableVertexArrayAttribEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableVertexArrayAttribEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableVertexArrayAttribEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableVertexArrayAttribEXT_Idx));
        if(last_diff > 1000000000){
            printf("glEnableVertexArrayAttribEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableVertexArrayAttribEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexArrayAttribEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexArrayAttribEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableVertexArrayAttribEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableVertexArrayAttribEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableVertexArrayAttribEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableVertexArrayAttribEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableVertexArrayAttribEXT_Idx) = get_ts();
        }


	

}