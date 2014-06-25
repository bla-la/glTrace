#include <glTraceCommon.h>
#include <generated.h>

#define glAlphaFuncxOES_wrp						\
    ((void  (*)(GLenum func,GLfixed ref                                        \
    ))GL_ENTRY_PTR(glAlphaFuncxOES_Idx))


GLAPI void  APIENTRY glAlphaFuncxOES(GLenum func,GLfixed ref)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glAlphaFuncxOES_Idx))
	{
            GL_ENTRY_PTR(glAlphaFuncxOES_Idx) = dlsym(RTLD_NEXT,"glAlphaFuncxOES");
            if(!GL_ENTRY_PTR(glAlphaFuncxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glAlphaFuncxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glAlphaFuncxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAlphaFuncxOES_wrp(func,ref);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAlphaFuncxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAlphaFuncxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glAlphaFuncxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAlphaFuncxOES_Idx),
				 GL_ENTRY_LAST_TS(glAlphaFuncxOES_Idx));
        if(last_diff > 1000000000){
            printf("glAlphaFuncxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAlphaFuncxOES_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncxOES_Idx),
	             GL_ENTRY_CALL_TIME(glAlphaFuncxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glAlphaFuncxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAlphaFuncxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAlphaFuncxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAlphaFuncxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAlphaFuncxOES_Idx) = get_ts();
        }


	

}