#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage3DMultisample_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTexStorage3DMultisample_Idx))


GLAPI void  APIENTRY glTexStorage3DMultisample(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexStorage3DMultisample_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage3DMultisample_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage3DMultisample_wrp(target,samples,internalformat,width,height,depth,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage3DMultisample_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage3DMultisample_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage3DMultisample_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage3DMultisample_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage3DMultisample_Idx));


        if(last_diff > 1000000000){
            printf("glTexStorage3DMultisample %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DMultisample_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DMultisample_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisample_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage3DMultisample_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisample_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage3DMultisample_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage3DMultisample_Idx) = get_ts();
        }


	

}