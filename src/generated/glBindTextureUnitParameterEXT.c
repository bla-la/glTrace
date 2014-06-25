#include <glTraceCommon.h>
#include <generated.h>

#define glBindTextureUnitParameterEXT_wrp						\
    ((GLuint  (*)(GLenum unit,GLenum value                                        \
    ))GL_ENTRY_PTR(glBindTextureUnitParameterEXT_Idx))


GLAPI GLuint  APIENTRY glBindTextureUnitParameterEXT(GLenum unit,GLenum value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindTextureUnitParameterEXT_Idx))
	{
            GL_ENTRY_PTR(glBindTextureUnitParameterEXT_Idx) = dlsym(RTLD_NEXT,"glBindTextureUnitParameterEXT");
            if(!GL_ENTRY_PTR(glBindTextureUnitParameterEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindTextureUnitParameterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTextureUnitParameterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glBindTextureUnitParameterEXT_wrp(unit,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTextureUnitParameterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTextureUnitParameterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTextureUnitParameterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTextureUnitParameterEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindTextureUnitParameterEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindTextureUnitParameterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTextureUnitParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindTextureUnitParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindTextureUnitParameterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTextureUnitParameterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTextureUnitParameterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTextureUnitParameterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTextureUnitParameterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTextureUnitParameterEXT_Idx) = get_ts();
        }


	return retval;

}