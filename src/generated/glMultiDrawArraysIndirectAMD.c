#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArraysIndirectAMD_wrp						\
    ((void  (*)(GLenum mode,const void *indirect,GLsizei primcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawArraysIndirectAMD_Idx))


GLAPI void  APIENTRY glMultiDrawArraysIndirectAMD(GLenum mode,const void *indirect,GLsizei primcount,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArraysIndirectAMD_wrp(mode,indirect,primcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectAMD_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectAMD_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawArraysIndirectAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectAMD_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectAMD_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectAMD_Idx) = get_ts();
        }


	

}