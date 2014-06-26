#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageEXT_Idx))


GLAPI void  APIENTRY glRenderbufferStorageEXT(GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageEXT_wrp(target,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageEXT_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glRenderbufferStorageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageEXT_Idx) = get_ts();
        }


	

}