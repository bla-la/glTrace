#include <glTraceCommon.h>
#include <generated.h>

#define glGetBooleanIndexedvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLboolean *data                                        \
    ))GL_ENTRY_PTR(glGetBooleanIndexedvEXT_Idx))


GLAPI void  APIENTRY glGetBooleanIndexedvEXT(GLenum target,GLuint index,GLboolean *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBooleanIndexedvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetBooleanIndexedvEXT_Idx) = dlsym(RTLD_NEXT,"glGetBooleanIndexedvEXT");
            if(!GL_ENTRY_PTR(glGetBooleanIndexedvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBooleanIndexedvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBooleanIndexedvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBooleanIndexedvEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBooleanIndexedvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBooleanIndexedvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBooleanIndexedvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBooleanIndexedvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetBooleanIndexedvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetBooleanIndexedvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBooleanIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetBooleanIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetBooleanIndexedvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBooleanIndexedvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBooleanIndexedvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBooleanIndexedvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBooleanIndexedvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBooleanIndexedvEXT_Idx) = get_ts();
        }


	

}