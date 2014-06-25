#include <glTraceCommon.h>
#include <generated.h>

#define glIsEnabledIndexedEXT_wrp						\
    ((GLboolean  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glIsEnabledIndexedEXT_Idx))


GLAPI GLboolean  APIENTRY glIsEnabledIndexedEXT(GLenum target,GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsEnabledIndexedEXT_Idx))
	{
            GL_ENTRY_PTR(glIsEnabledIndexedEXT_Idx) = dlsym(RTLD_NEXT,"glIsEnabledIndexedEXT");
            if(!GL_ENTRY_PTR(glIsEnabledIndexedEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsEnabledIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsEnabledIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsEnabledIndexedEXT_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsEnabledIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsEnabledIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsEnabledIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsEnabledIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsEnabledIndexedEXT_Idx));
        if(last_diff > 1000000000){
            printf("glIsEnabledIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsEnabledIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabledIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabledIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsEnabledIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsEnabledIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsEnabledIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsEnabledIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsEnabledIndexedEXT_Idx) = get_ts();
        }


	return retval;

}