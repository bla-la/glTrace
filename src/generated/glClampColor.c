#include <glTraceCommon.h>
#include <generated.h>

#define glClampColor_wrp						\
    ((void  (*)(GLenum target,GLenum clamp                                        \
    ))GL_ENTRY_PTR(glClampColor_Idx))


GLAPI void  APIENTRY glClampColor(GLenum target,GLenum clamp)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClampColor_Idx))
	{
            GL_ENTRY_PTR(glClampColor_Idx) = dlsym(RTLD_NEXT,"glClampColor");
            if(!GL_ENTRY_PTR(glClampColor_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClampColor_Idx))
    	{
            GL_ENTRY_PREV_TS(glClampColor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClampColor_wrp(target,clamp);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClampColor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClampColor_Idx) ++;

        GL_ENTRY_LAST_TS(glClampColor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClampColor_Idx),
				 GL_ENTRY_LAST_TS(glClampColor_Idx));
        if(last_diff > 1000000000){
            printf("glClampColor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClampColor_Idx),
	             GL_ENTRY_CALL_TIME(glClampColor_Idx),
	             GL_ENTRY_CALL_TIME(glClampColor_Idx) /
	             GL_ENTRY_CALL_COUNT(glClampColor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClampColor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClampColor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClampColor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClampColor_Idx) = get_ts();
        }


	

}