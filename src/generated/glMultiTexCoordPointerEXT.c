#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoordPointerEXT_wrp						\
    ((void  (*)(GLenum texunit,GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glMultiTexCoordPointerEXT_Idx))


GLAPI void  APIENTRY glMultiTexCoordPointerEXT(GLenum texunit,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexCoordPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexCoordPointerEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexCoordPointerEXT");
            if(!GL_ENTRY_PTR(glMultiTexCoordPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexCoordPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoordPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoordPointerEXT_wrp(texunit,size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoordPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoordPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoordPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoordPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoordPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexCoordPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoordPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoordPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoordPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoordPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoordPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoordPointerEXT_Idx) = get_ts();
        }


	

}