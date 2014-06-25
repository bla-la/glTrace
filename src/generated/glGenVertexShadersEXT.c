#include <glTraceCommon.h>
#include <generated.h>

#define glGenVertexShadersEXT_wrp						\
    ((GLuint  (*)(GLuint range                                        \
    ))GL_ENTRY_PTR(glGenVertexShadersEXT_Idx))


GLAPI GLuint  APIENTRY glGenVertexShadersEXT(GLuint range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenVertexShadersEXT_Idx))
	{
            GL_ENTRY_PTR(glGenVertexShadersEXT_Idx) = dlsym(RTLD_NEXT,"glGenVertexShadersEXT");
            if(!GL_ENTRY_PTR(glGenVertexShadersEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenVertexShadersEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenVertexShadersEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenVertexShadersEXT_wrp(range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenVertexShadersEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenVertexShadersEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenVertexShadersEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenVertexShadersEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenVertexShadersEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenVertexShadersEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenVertexShadersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexShadersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexShadersEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenVertexShadersEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenVertexShadersEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenVertexShadersEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenVertexShadersEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenVertexShadersEXT_Idx) = get_ts();
        }


	return retval;

}