#include <glTraceCommon.h>
#include <generated.h>

#define glAlphaFuncx_wrp						\
    ((void  (*)(GLenum func,GLfixed ref                                        \
    ))GL_ENTRY_PTR(glAlphaFuncx_Idx))


GLAPI void  APIENTRY glAlphaFuncx(GLenum func,GLfixed ref)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAlphaFuncx_Idx))
    	{
            GL_ENTRY_PREV_TS(glAlphaFuncx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAlphaFuncx_wrp(func,ref);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAlphaFuncx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAlphaFuncx_Idx) ++;

        GL_ENTRY_LAST_TS(glAlphaFuncx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAlphaFuncx_Idx),
				 GL_ENTRY_LAST_TS(glAlphaFuncx_Idx));


        if(last_diff > 1000000000){
            printf("glAlphaFuncx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAlphaFuncx_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncx_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncx_Idx) /
	             GL_ENTRY_CALL_COUNT(glAlphaFuncx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAlphaFuncx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAlphaFuncx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAlphaFuncx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAlphaFuncx_Idx) = get_ts();
        }


	

}