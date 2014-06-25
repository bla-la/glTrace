#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsIndirect_wrp						\
    ((void  (*)(GLenum mode,GLenum type,const void *indirect                                        \
    ))GL_ENTRY_PTR(glDrawElementsIndirect_Idx))


GLAPI void  APIENTRY glDrawElementsIndirect(GLenum mode,GLenum type,const void *indirect)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawElementsIndirect_Idx))
	{
            GL_ENTRY_PTR(glDrawElementsIndirect_Idx) = dlsym(RTLD_NEXT,"glDrawElementsIndirect");
            if(!GL_ENTRY_PTR(glDrawElementsIndirect_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawElementsIndirect_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsIndirect_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsIndirect_wrp(mode,type,indirect);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsIndirect_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsIndirect_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsIndirect_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsIndirect_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsIndirect_Idx));
        if(last_diff > 1000000000){
            printf("glDrawElementsIndirect %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsIndirect_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsIndirect_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsIndirect_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsIndirect_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsIndirect_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsIndirect_Idx) = get_ts();
        }


	

}