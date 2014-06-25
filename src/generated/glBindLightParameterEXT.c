#include <glTraceCommon.h>
#include <generated.h>

#define glBindLightParameterEXT_wrp						\
    ((GLuint  (*)(GLenum light,GLenum value                                        \
    ))GL_ENTRY_PTR(glBindLightParameterEXT_Idx))


GLAPI GLuint  APIENTRY glBindLightParameterEXT(GLenum light,GLenum value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindLightParameterEXT_Idx))
	{
            GL_ENTRY_PTR(glBindLightParameterEXT_Idx) = dlsym(RTLD_NEXT,"glBindLightParameterEXT");
            if(!GL_ENTRY_PTR(glBindLightParameterEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindLightParameterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindLightParameterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glBindLightParameterEXT_wrp(light,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindLightParameterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindLightParameterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindLightParameterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindLightParameterEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindLightParameterEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindLightParameterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindLightParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindLightParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindLightParameterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindLightParameterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindLightParameterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindLightParameterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindLightParameterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindLightParameterEXT_Idx) = get_ts();
        }


	return retval;

}