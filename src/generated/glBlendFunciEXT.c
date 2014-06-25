#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFunciEXT_wrp						\
    ((void  (*)(GLuint buf,GLenum src,GLenum dst                                        \
    ))GL_ENTRY_PTR(glBlendFunciEXT_Idx))


GLAPI void  APIENTRY glBlendFunciEXT(GLuint buf,GLenum src,GLenum dst)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFunciEXT_Idx))
	{
            GL_ENTRY_PTR(glBlendFunciEXT_Idx) = dlsym(RTLD_NEXT,"glBlendFunciEXT");
            if(!GL_ENTRY_PTR(glBlendFunciEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFunciEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFunciEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFunciEXT_wrp(buf,src,dst);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFunciEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFunciEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFunciEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFunciEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendFunciEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFunciEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFunciEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunciEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFunciEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFunciEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFunciEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFunciEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFunciEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFunciEXT_Idx) = get_ts();
        }


	

}