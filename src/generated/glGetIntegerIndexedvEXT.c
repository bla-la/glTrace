#include <glTraceCommon.h>
#include <generated.h>

#define glGetIntegerIndexedvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetIntegerIndexedvEXT_Idx))


GLAPI void  APIENTRY glGetIntegerIndexedvEXT(GLenum target,GLuint index,GLint *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetIntegerIndexedvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetIntegerIndexedvEXT_Idx) = dlsym(RTLD_NEXT,"glGetIntegerIndexedvEXT");
            if(!GL_ENTRY_PTR(glGetIntegerIndexedvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetIntegerIndexedvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetIntegerIndexedvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetIntegerIndexedvEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetIntegerIndexedvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetIntegerIndexedvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetIntegerIndexedvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetIntegerIndexedvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetIntegerIndexedvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetIntegerIndexedvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetIntegerIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetIntegerIndexedvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetIntegerIndexedvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetIntegerIndexedvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetIntegerIndexedvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetIntegerIndexedvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetIntegerIndexedvEXT_Idx) = get_ts();
        }


	

}