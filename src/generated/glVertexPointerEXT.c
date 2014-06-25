#include <glTraceCommon.h>
#include <generated.h>

#define glVertexPointerEXT_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexPointerEXT_Idx))


GLAPI void  APIENTRY glVertexPointerEXT(GLint size,GLenum type,GLsizei stride,GLsizei count,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexPointerEXT_Idx) = dlsym(RTLD_NEXT,"glVertexPointerEXT");
            if(!GL_ENTRY_PTR(glVertexPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexPointerEXT_wrp(size,type,stride,count,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexPointerEXT_Idx) = get_ts();
        }


	

}