#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordPointerEXT_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer                                        \
    ))GL_ENTRY_PTR(glTexCoordPointerEXT_Idx))


GLAPI void  APIENTRY glTexCoordPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoordPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordPointerEXT_wrp(size,type,stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoordPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordPointerEXT_Idx) = get_ts();
        }


	

}