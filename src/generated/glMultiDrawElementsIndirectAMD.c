#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsIndirectAMD_wrp						\
    ((void  (*)(GLenum mode,GLenum type,const void *indirect,GLsizei primcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsIndirectAMD_Idx))


GLAPI void  APIENTRY glMultiDrawElementsIndirectAMD(GLenum mode,GLenum type,const void *indirect,GLsizei primcount,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsIndirectAMD_wrp(mode,type,indirect,primcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectAMD_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectAMD_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElementsIndirectAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectAMD_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectAMD_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectAMD_Idx) = get_ts();
        }


	

}