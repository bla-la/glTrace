#include <glTraceCommon.h>
#include <generated.h>

#define glClientActiveTextureARB_wrp						\
    ((void  (*)(GLenum texture                                        \
    ))GL_ENTRY_PTR(glClientActiveTextureARB_Idx))


GLAPI void  APIENTRY glClientActiveTextureARB(GLenum texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClientActiveTextureARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientActiveTextureARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClientActiveTextureARB_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientActiveTextureARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientActiveTextureARB_Idx) ++;

        GL_ENTRY_LAST_TS(glClientActiveTextureARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientActiveTextureARB_Idx),
				 GL_ENTRY_LAST_TS(glClientActiveTextureARB_Idx));


        if(last_diff > 1000000000){
            printf("glClientActiveTextureARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientActiveTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveTextureARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientActiveTextureARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientActiveTextureARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientActiveTextureARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientActiveTextureARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientActiveTextureARB_Idx) = get_ts();
        }


	

}