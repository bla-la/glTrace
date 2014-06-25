#include <glTraceCommon.h>
#include <generated.h>

#define glGetFloatIndexedvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat *data                                        \
    ))GL_ENTRY_PTR(glGetFloatIndexedvEXT_Idx))


GLAPI void  APIENTRY glGetFloatIndexedvEXT(GLenum target,GLuint index,GLfloat *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFloatIndexedvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetFloatIndexedvEXT_Idx) = dlsym(RTLD_NEXT,"glGetFloatIndexedvEXT");
            if(!GL_ENTRY_PTR(glGetFloatIndexedvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFloatIndexedvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFloatIndexedvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFloatIndexedvEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFloatIndexedvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFloatIndexedvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFloatIndexedvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFloatIndexedvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetFloatIndexedvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetFloatIndexedvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFloatIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloatIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloatIndexedvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFloatIndexedvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFloatIndexedvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFloatIndexedvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFloatIndexedvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFloatIndexedvEXT_Idx) = get_ts();
        }


	

}