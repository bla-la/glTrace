#include <glTraceCommon.h>
#include <generated.h>

#define glNormalPointerEXT_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,GLsizei count,const void *pointer                                        \
    ))GL_ENTRY_PTR(glNormalPointerEXT_Idx))


GLAPI void  APIENTRY glNormalPointerEXT(GLenum type,GLsizei stride,GLsizei count,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glNormalPointerEXT_Idx) = dlsym(RTLD_NEXT,"glNormalPointerEXT");
            if(!GL_ENTRY_PTR(glNormalPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalPointerEXT_wrp(type,stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glNormalPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNormalPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalPointerEXT_Idx) = get_ts();
        }


	

}