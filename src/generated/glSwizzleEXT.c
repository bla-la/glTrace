#include <glTraceCommon.h>
#include <generated.h>

#define glSwizzleEXT_wrp						\
    ((void  (*)(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW                                        \
    ))GL_ENTRY_PTR(glSwizzleEXT_Idx))


GLAPI void  APIENTRY glSwizzleEXT(GLuint res,GLuint in,GLenum outX,GLenum outY,GLenum outZ,GLenum outW)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSwizzleEXT_Idx))
	{
            GL_ENTRY_PTR(glSwizzleEXT_Idx) = dlsym(RTLD_NEXT,"glSwizzleEXT");
            if(!GL_ENTRY_PTR(glSwizzleEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSwizzleEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSwizzleEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSwizzleEXT_wrp(res,in,outX,outY,outZ,outW);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSwizzleEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSwizzleEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSwizzleEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSwizzleEXT_Idx),
				 GL_ENTRY_LAST_TS(glSwizzleEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSwizzleEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSwizzleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSwizzleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSwizzleEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSwizzleEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSwizzleEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSwizzleEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSwizzleEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSwizzleEXT_Idx) = get_ts();
        }


	

}