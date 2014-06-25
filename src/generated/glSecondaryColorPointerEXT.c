#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColorPointerEXT_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glSecondaryColorPointerEXT_Idx))


GLAPI void  APIENTRY glSecondaryColorPointerEXT(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColorPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColorPointerEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColorPointerEXT");
            if(!GL_ENTRY_PTR(glSecondaryColorPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColorPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColorPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColorPointerEXT_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColorPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColorPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColorPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColorPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColorPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColorPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColorPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColorPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColorPointerEXT_Idx) = get_ts();
        }


	

}