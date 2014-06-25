#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedEXT_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedEXT_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedEXT(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawElementsInstancedEXT_Idx))
	{
            GL_ENTRY_PTR(glDrawElementsInstancedEXT_Idx) = dlsym(RTLD_NEXT,"glDrawElementsInstancedEXT");
            if(!GL_ENTRY_PTR(glDrawElementsInstancedEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedEXT_wrp(mode,count,type,indices,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedEXT_Idx) = get_ts();
        }


	

}