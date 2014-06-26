#include <glTraceCommon.h>
#include <generated.h>

#define glGetCompressedTexImageARB_wrp						\
    ((void  (*)(GLenum target,GLint level,void *img                                        \
    ))GL_ENTRY_PTR(glGetCompressedTexImageARB_Idx))


GLAPI void  APIENTRY glGetCompressedTexImageARB(GLenum target,GLint level,void *img)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetCompressedTexImageARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCompressedTexImageARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCompressedTexImageARB_wrp(target,level,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCompressedTexImageARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCompressedTexImageARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCompressedTexImageARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCompressedTexImageARB_Idx),
				 GL_ENTRY_LAST_TS(glGetCompressedTexImageARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetCompressedTexImageARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCompressedTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTexImageARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTexImageARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCompressedTexImageARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCompressedTexImageARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCompressedTexImageARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCompressedTexImageARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCompressedTexImageARB_Idx) = get_ts();
        }


	

}