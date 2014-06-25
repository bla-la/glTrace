#include <glTraceCommon.h>
#include <generated.h>

#define glHistogram_wrp						\
    ((void  (*)(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink                                        \
    ))GL_ENTRY_PTR(glHistogram_Idx))


GLAPI void  APIENTRY glHistogram(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glHistogram_Idx))
	{
            GL_ENTRY_PTR(glHistogram_Idx) = dlsym(RTLD_NEXT,"glHistogram");
            if(!GL_ENTRY_PTR(glHistogram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glHistogram_Idx))
    	{
            GL_ENTRY_PREV_TS(glHistogram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glHistogram_wrp(target,width,internalformat,sink);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glHistogram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glHistogram_Idx) ++;

        GL_ENTRY_LAST_TS(glHistogram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glHistogram_Idx),
				 GL_ENTRY_LAST_TS(glHistogram_Idx));
        if(last_diff > 1000000000){
            printf("glHistogram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glHistogram_Idx) /
	             GL_ENTRY_CALL_COUNT(glHistogram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glHistogram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glHistogram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glHistogram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glHistogram_Idx) = get_ts();
        }


	

}