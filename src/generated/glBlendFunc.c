#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFunc_wrp						\
    ((void  (*)(GLenum sfactor,GLenum dfactor                                        \
    ))GL_ENTRY_PTR(glBlendFunc_Idx))


GLAPI void  APIENTRY glBlendFunc(GLenum sfactor,GLenum dfactor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFunc_Idx))
	{
            GL_ENTRY_PTR(glBlendFunc_Idx) = dlsym(RTLD_NEXT,"glBlendFunc");
            if(!GL_ENTRY_PTR(glBlendFunc_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFunc_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFunc_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFunc_wrp(sfactor,dfactor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFunc_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFunc_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFunc_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFunc_Idx),
				 GL_ENTRY_LAST_TS(glBlendFunc_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFunc %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFunc_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunc_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunc_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFunc_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFunc_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFunc_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFunc_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFunc_Idx) = get_ts();
        }


	

}