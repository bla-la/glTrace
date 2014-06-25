#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectLabelKHR_wrp						\
    ((void  (*)(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label                                        \
    ))GL_ENTRY_PTR(glGetObjectLabelKHR_Idx))


GLAPI void  APIENTRY glGetObjectLabelKHR(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectLabelKHR_Idx))
	{
            GL_ENTRY_PTR(glGetObjectLabelKHR_Idx) = dlsym(RTLD_NEXT,"glGetObjectLabelKHR");
            if(!GL_ENTRY_PTR(glGetObjectLabelKHR_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectLabelKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectLabelKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectLabelKHR_wrp(identifier,name,bufSize,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectLabelKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectLabelKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectLabelKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectLabelKHR_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectLabelKHR_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectLabelKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabelKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectLabelKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectLabelKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectLabelKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectLabelKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectLabelKHR_Idx) = get_ts();
        }


	

}