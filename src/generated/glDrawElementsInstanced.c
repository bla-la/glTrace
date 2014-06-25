#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstanced_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstanced_Idx))


GLAPI void  APIENTRY glDrawElementsInstanced(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawElementsInstanced_Idx))
	{
            GL_ENTRY_PTR(glDrawElementsInstanced_Idx) = dlsym(RTLD_NEXT,"glDrawElementsInstanced");
            if(!GL_ENTRY_PTR(glDrawElementsInstanced_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawElementsInstanced_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstanced_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstanced_wrp(mode,count,type,indices,instancecount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstanced_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstanced_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstanced_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstanced_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstanced_Idx));
        if(last_diff > 1000000000){
            printf("glDrawElementsInstanced %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstanced_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstanced_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstanced_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstanced_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstanced_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstanced_Idx) = get_ts();
        }


	

}