#include <glTraceCommon.h>
#include <generated.h>

#define glVariantPointerEXT_wrp						\
    ((void  (*)(GLuint id,GLenum type,GLuint stride,const void *addr                                        \
    ))GL_ENTRY_PTR(glVariantPointerEXT_Idx))


GLAPI void  APIENTRY glVariantPointerEXT(GLuint id,GLenum type,GLuint stride,const void *addr)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVariantPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glVariantPointerEXT_Idx) = dlsym(RTLD_NEXT,"glVariantPointerEXT");
            if(!GL_ENTRY_PTR(glVariantPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVariantPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantPointerEXT_wrp(id,type,stride,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVariantPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantPointerEXT_Idx) = get_ts();
        }


	

}