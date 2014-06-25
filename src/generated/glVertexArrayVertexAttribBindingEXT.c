#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribBindingEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint attribindex,GLuint bindingindex                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribBindingEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribBindingEXT(GLuint vaobj,GLuint attribindex,GLuint bindingindex)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexAttribBindingEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexAttribBindingEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexAttribBindingEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexAttribBindingEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribBindingEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribBindingEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribBindingEXT_wrp(vaobj,attribindex,bindingindex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribBindingEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribBindingEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribBindingEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribBindingEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribBindingEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribBindingEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribBindingEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribBindingEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribBindingEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribBindingEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribBindingEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribBindingEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribBindingEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribBindingEXT_Idx) = get_ts();
        }


	

}