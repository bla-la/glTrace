#include <glTraceCommon.h>
#include <generated.h>

#define glColorPointerEXT_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer                                        \
    ))GL_ENTRY_PTR(glColorPointerEXT_Idx))


GLAPI void  APIENTRY glColorPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorPointerEXT_wrp(size,type,stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glColorPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glColorPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glColorPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorPointerEXT_Idx) = get_ts();
        }


	

}