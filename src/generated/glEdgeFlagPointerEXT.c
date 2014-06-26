#include <glTraceCommon.h>
#include <generated.h>

#define glEdgeFlagPointerEXT_wrp						\
    ((void  (*)(GLsizei stride,GLsizei count,const GLboolean *pointer                                        \
    ))GL_ENTRY_PTR(glEdgeFlagPointerEXT_Idx))


GLAPI void  APIENTRY glEdgeFlagPointerEXT(GLsizei stride,GLsizei count,const GLboolean *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEdgeFlagPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEdgeFlagPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEdgeFlagPointerEXT_wrp(stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEdgeFlagPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEdgeFlagPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEdgeFlagPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEdgeFlagPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glEdgeFlagPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEdgeFlagPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEdgeFlagPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEdgeFlagPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEdgeFlagPointerEXT_Idx) = get_ts();
        }


	

}