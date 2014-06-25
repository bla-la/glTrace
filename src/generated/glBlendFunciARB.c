#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFunciARB_wrp						\
    ((void  (*)(GLuint buf,GLenum src,GLenum dst                                        \
    ))GL_ENTRY_PTR(glBlendFunciARB_Idx))


GLAPI void  APIENTRY glBlendFunciARB(GLuint buf,GLenum src,GLenum dst)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFunciARB_Idx))
	{
            GL_ENTRY_PTR(glBlendFunciARB_Idx) = dlsym(RTLD_NEXT,"glBlendFunciARB");
            if(!GL_ENTRY_PTR(glBlendFunciARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFunciARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFunciARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFunciARB_wrp(buf,src,dst);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFunciARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFunciARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFunciARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFunciARB_Idx),
				 GL_ENTRY_LAST_TS(glBlendFunciARB_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFunciARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFunciARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunciARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunciARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFunciARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFunciARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFunciARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFunciARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFunciARB_Idx) = get_ts();
        }


	

}