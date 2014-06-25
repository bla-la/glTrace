#include <glTraceCommon.h>
#include <generated.h>

#define glIsVertexAttribEnabledAPPLE_wrp						\
    ((GLboolean  (*)(GLuint index,GLenum pname                                        \
    ))GL_ENTRY_PTR(glIsVertexAttribEnabledAPPLE_Idx))


GLAPI GLboolean  APIENTRY glIsVertexAttribEnabledAPPLE(GLuint index,GLenum pname)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsVertexAttribEnabledAPPLE_Idx))
	{
            GL_ENTRY_PTR(glIsVertexAttribEnabledAPPLE_Idx) = dlsym(RTLD_NEXT,"glIsVertexAttribEnabledAPPLE");
            if(!GL_ENTRY_PTR(glIsVertexAttribEnabledAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsVertexAttribEnabledAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsVertexAttribEnabledAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsVertexAttribEnabledAPPLE_wrp(index,pname);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsVertexAttribEnabledAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsVertexAttribEnabledAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glIsVertexAttribEnabledAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsVertexAttribEnabledAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glIsVertexAttribEnabledAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glIsVertexAttribEnabledAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsVertexAttribEnabledAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexAttribEnabledAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexAttribEnabledAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsVertexAttribEnabledAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsVertexAttribEnabledAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsVertexAttribEnabledAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsVertexAttribEnabledAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsVertexAttribEnabledAPPLE_Idx) = get_ts();
        }


	return retval;

}