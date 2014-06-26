#include <glTraceCommon.h>
#include <generated.h>

#define glGetnCompressedTexImageARB_wrp						\
    ((void  (*)(GLenum target,GLint lod,GLsizei bufSize,void *img                                        \
    ))GL_ENTRY_PTR(glGetnCompressedTexImageARB_Idx))


GLAPI void  APIENTRY glGetnCompressedTexImageARB(GLenum target,GLint lod,GLsizei bufSize,void *img)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnCompressedTexImageARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnCompressedTexImageARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnCompressedTexImageARB_wrp(target,lod,bufSize,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnCompressedTexImageARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnCompressedTexImageARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnCompressedTexImageARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnCompressedTexImageARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnCompressedTexImageARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnCompressedTexImageARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnCompressedTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnCompressedTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnCompressedTexImageARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnCompressedTexImageARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnCompressedTexImageARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnCompressedTexImageARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnCompressedTexImageARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnCompressedTexImageARB_Idx) = get_ts();
        }


	

}