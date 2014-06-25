#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsIndirect_wrp						\
    ((void  (*)(GLenum mode,GLenum type,const void *indirect,GLsizei drawcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsIndirect_Idx))


GLAPI void  APIENTRY glMultiDrawElementsIndirect(GLenum mode,GLenum type,const void *indirect,GLsizei drawcount,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiDrawElementsIndirect_Idx))
	{
            GL_ENTRY_PTR(glMultiDrawElementsIndirect_Idx) = dlsym(RTLD_NEXT,"glMultiDrawElementsIndirect");
            if(!GL_ENTRY_PTR(glMultiDrawElementsIndirect_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsIndirect_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsIndirect_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsIndirect_wrp(mode,type,indirect,drawcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirect_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirect_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsIndirect_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsIndirect_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsIndirect_Idx));
        if(last_diff > 1000000000){
            printf("glMultiDrawElementsIndirect %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirect_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirect_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirect_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirect_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirect_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsIndirect_Idx) = get_ts();
        }


	

}