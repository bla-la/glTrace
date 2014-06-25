#include <glTraceCommon.h>
#include <generated.h>

#define glGetSeparableFilter_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span                                        \
    ))GL_ENTRY_PTR(glGetSeparableFilter_Idx))


GLAPI void  APIENTRY glGetSeparableFilter(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetSeparableFilter_Idx))
	{
            GL_ENTRY_PTR(glGetSeparableFilter_Idx) = dlsym(RTLD_NEXT,"glGetSeparableFilter");
            if(!GL_ENTRY_PTR(glGetSeparableFilter_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetSeparableFilter_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSeparableFilter_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSeparableFilter_wrp(target,format,type,row,column,span);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSeparableFilter_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSeparableFilter_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSeparableFilter_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSeparableFilter_Idx),
				 GL_ENTRY_LAST_TS(glGetSeparableFilter_Idx));
        if(last_diff > 1000000000){
            printf("glGetSeparableFilter %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSeparableFilter_Idx),
	             GL_ENTRY_CALL_TIME(glGetSeparableFilter_Idx),
	             GL_ENTRY_CALL_TIME(glGetSeparableFilter_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSeparableFilter_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSeparableFilter_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSeparableFilter_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSeparableFilter_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSeparableFilter_Idx) = get_ts();
        }


	

}