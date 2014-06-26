#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisampleAPPLE_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisampleAPPLE_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisampleAPPLE(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisampleAPPLE_wrp(target,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisampleAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleAPPLE_Idx) = get_ts();
        }


	

}