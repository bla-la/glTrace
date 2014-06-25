#include <glTraceCommon.h>
#include <generated.h>

#define glGetPointerIndexedvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,void **data                                        \
    ))GL_ENTRY_PTR(glGetPointerIndexedvEXT_Idx))


GLAPI void  APIENTRY glGetPointerIndexedvEXT(GLenum target,GLuint index,void **data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPointerIndexedvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetPointerIndexedvEXT_Idx) = dlsym(RTLD_NEXT,"glGetPointerIndexedvEXT");
            if(!GL_ENTRY_PTR(glGetPointerIndexedvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPointerIndexedvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPointerIndexedvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPointerIndexedvEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPointerIndexedvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPointerIndexedvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPointerIndexedvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPointerIndexedvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetPointerIndexedvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetPointerIndexedvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPointerIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointerIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetPointerIndexedvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPointerIndexedvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPointerIndexedvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPointerIndexedvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPointerIndexedvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPointerIndexedvEXT_Idx) = get_ts();
        }


	

}