#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorage_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorage_Idx))


GLAPI void  APIENTRY glRenderbufferStorage(GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRenderbufferStorage_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorage_wrp(target,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorage_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorage_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorage_Idx));


        if(last_diff > 1000000000){
            printf("glRenderbufferStorage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorage_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorage_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorage_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorage_Idx) = get_ts();
        }


	

}