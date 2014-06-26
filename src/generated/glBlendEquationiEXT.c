#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationiEXT_wrp						\
    ((void  (*)(GLuint buf,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquationiEXT_Idx))


GLAPI void  APIENTRY glBlendEquationiEXT(GLuint buf,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationiEXT_wrp(buf,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationiEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationiEXT_Idx) = get_ts();
        }


	

}