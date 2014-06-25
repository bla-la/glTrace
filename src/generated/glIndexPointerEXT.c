#include <glTraceCommon.h>
#include <generated.h>

#define glIndexPointerEXT_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,GLsizei count,const void *pointer                                        \
    ))GL_ENTRY_PTR(glIndexPointerEXT_Idx))


GLAPI void  APIENTRY glIndexPointerEXT(GLenum type,GLsizei stride,GLsizei count,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glIndexPointerEXT_Idx) = dlsym(RTLD_NEXT,"glIndexPointerEXT");
            if(!GL_ENTRY_PTR(glIndexPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexPointerEXT_wrp(type,stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glIndexPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glIndexPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIndexPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIndexPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexPointerEXT_Idx) = get_ts();
        }


	

}