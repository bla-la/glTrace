#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArraysIndirect_wrp						\
    ((void  (*)(GLenum mode,const void *indirect,GLsizei drawcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawArraysIndirect_Idx))


GLAPI void  APIENTRY glMultiDrawArraysIndirect(GLenum mode,const void *indirect,GLsizei drawcount,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiDrawArraysIndirect_Idx))
	{
            GL_ENTRY_PTR(glMultiDrawArraysIndirect_Idx) = dlsym(RTLD_NEXT,"glMultiDrawArraysIndirect");
            if(!GL_ENTRY_PTR(glMultiDrawArraysIndirect_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiDrawArraysIndirect_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArraysIndirect_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArraysIndirect_wrp(mode,indirect,drawcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirect_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirect_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArraysIndirect_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArraysIndirect_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArraysIndirect_Idx));
        if(last_diff > 1000000000){
            printf("glMultiDrawArraysIndirect %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirect_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirect_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirect_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirect_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirect_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArraysIndirect_Idx) = get_ts();
        }


	

}