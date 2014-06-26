#include <glTraceCommon.h>
#include <generated.h>

#define glTangentPointerEXT_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glTangentPointerEXT_Idx))


GLAPI void  APIENTRY glTangentPointerEXT(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTangentPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTangentPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTangentPointerEXT_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTangentPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTangentPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTangentPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTangentPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glTangentPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTangentPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTangentPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangentPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTangentPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTangentPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTangentPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTangentPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTangentPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTangentPointerEXT_Idx) = get_ts();
        }


	

}