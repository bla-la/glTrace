#include <glTraceCommon.h>
#include <generated.h>

#define glGetInvariantBooleanvEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLboolean *data                                        \
    ))GL_ENTRY_PTR(glGetInvariantBooleanvEXT_Idx))


GLAPI void  APIENTRY glGetInvariantBooleanvEXT(GLuint id,GLenum value,GLboolean *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetInvariantBooleanvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetInvariantBooleanvEXT_Idx) = dlsym(RTLD_NEXT,"glGetInvariantBooleanvEXT");
            if(!GL_ENTRY_PTR(glGetInvariantBooleanvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetInvariantBooleanvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInvariantBooleanvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInvariantBooleanvEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInvariantBooleanvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInvariantBooleanvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInvariantBooleanvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInvariantBooleanvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetInvariantBooleanvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetInvariantBooleanvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInvariantBooleanvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantBooleanvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantBooleanvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInvariantBooleanvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInvariantBooleanvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInvariantBooleanvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInvariantBooleanvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInvariantBooleanvEXT_Idx) = get_ts();
        }


	

}