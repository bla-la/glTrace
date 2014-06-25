#include <glTraceCommon.h>
#include <generated.h>

#define glTextureRangeAPPLE_wrp						\
    ((void  (*)(GLenum target,GLsizei length,const void *pointer                                        \
    ))GL_ENTRY_PTR(glTextureRangeAPPLE_Idx))


GLAPI void  APIENTRY glTextureRangeAPPLE(GLenum target,GLsizei length,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureRangeAPPLE_Idx))
	{
            GL_ENTRY_PTR(glTextureRangeAPPLE_Idx) = dlsym(RTLD_NEXT,"glTextureRangeAPPLE");
            if(!GL_ENTRY_PTR(glTextureRangeAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureRangeAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureRangeAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureRangeAPPLE_wrp(target,length,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureRangeAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureRangeAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureRangeAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureRangeAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glTextureRangeAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glTextureRangeAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTextureRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTextureRangeAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureRangeAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureRangeAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureRangeAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureRangeAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureRangeAPPLE_Idx) = get_ts();
        }


	

}