#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage2DMultisample_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTexStorage2DMultisample_Idx))


GLAPI void  APIENTRY glTexStorage2DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexStorage2DMultisample_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage2DMultisample_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage2DMultisample_wrp(target,samples,internalformat,width,height,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage2DMultisample_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage2DMultisample_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage2DMultisample_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage2DMultisample_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage2DMultisample_Idx));


        if(last_diff > 1000000000){
            printf("glTexStorage2DMultisample %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage2DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2DMultisample_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage2DMultisample_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage2DMultisample_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage2DMultisample_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage2DMultisample_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage2DMultisample_Idx) = get_ts();
        }


	

}