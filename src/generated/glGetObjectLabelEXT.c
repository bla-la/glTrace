#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectLabelEXT_wrp						\
    ((void  (*)(GLenum type,GLuint object,GLsizei bufSize,GLsizei *length,GLchar *label                                        \
    ))GL_ENTRY_PTR(glGetObjectLabelEXT_Idx))


GLAPI void  APIENTRY glGetObjectLabelEXT(GLenum type,GLuint object,GLsizei bufSize,GLsizei *length,GLchar *label)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectLabelEXT_Idx))
	{
            GL_ENTRY_PTR(glGetObjectLabelEXT_Idx) = dlsym(RTLD_NEXT,"glGetObjectLabelEXT");
            if(!GL_ENTRY_PTR(glGetObjectLabelEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectLabelEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectLabelEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectLabelEXT_wrp(type,object,bufSize,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectLabelEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectLabelEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectLabelEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectLabelEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectLabelEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectLabelEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectLabelEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabelEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabelEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectLabelEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectLabelEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectLabelEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectLabelEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectLabelEXT_Idx) = get_ts();
        }


	

}