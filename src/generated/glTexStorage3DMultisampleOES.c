#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage3DMultisampleOES_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTexStorage3DMultisampleOES_Idx))


GLAPI void  APIENTRY glTexStorage3DMultisampleOES(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexStorage3DMultisampleOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage3DMultisampleOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage3DMultisampleOES_wrp(target,samples,internalformat,width,height,depth,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage3DMultisampleOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage3DMultisampleOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage3DMultisampleOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage3DMultisampleOES_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage3DMultisampleOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexStorage3DMultisampleOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisampleOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DMultisampleOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DMultisampleOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisampleOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage3DMultisampleOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage3DMultisampleOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage3DMultisampleOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage3DMultisampleOES_Idx) = get_ts();
        }


	

}