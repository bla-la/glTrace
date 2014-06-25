#include <glTraceCommon.h>
#include <generated.h>

#define glWriteMaskEXT_wrp						\
    ((void  (*)(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW                                        \
    ))GL_ENTRY_PTR(glWriteMaskEXT_Idx))


GLAPI void  APIENTRY glWriteMaskEXT(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWriteMaskEXT_Idx))
	{
            GL_ENTRY_PTR(glWriteMaskEXT_Idx) = dlsym(RTLD_NEXT,"glWriteMaskEXT");
            if(!GL_ENTRY_PTR(glWriteMaskEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWriteMaskEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glWriteMaskEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWriteMaskEXT_wrp(res,in,outX,outY,outZ,outW);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWriteMaskEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWriteMaskEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glWriteMaskEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWriteMaskEXT_Idx),
				 GL_ENTRY_LAST_TS(glWriteMaskEXT_Idx));
        if(last_diff > 1000000000){
            printf("glWriteMaskEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWriteMaskEXT_Idx),
	             GL_ENTRY_CALL_TIME(glWriteMaskEXT_Idx),
	             GL_ENTRY_CALL_TIME(glWriteMaskEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glWriteMaskEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWriteMaskEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWriteMaskEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWriteMaskEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWriteMaskEXT_Idx) = get_ts();
        }


	

}