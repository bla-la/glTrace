#include <glTraceCommon.h>
#include <generated.h>

#define glIsVariantEnabledEXT_wrp						\
    ((GLboolean  (*)(GLuint id,GLenum cap                                        \
    ))GL_ENTRY_PTR(glIsVariantEnabledEXT_Idx))


GLAPI GLboolean  APIENTRY glIsVariantEnabledEXT(GLuint id,GLenum cap)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsVariantEnabledEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsVariantEnabledEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsVariantEnabledEXT_wrp(id,cap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsVariantEnabledEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsVariantEnabledEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsVariantEnabledEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsVariantEnabledEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsVariantEnabledEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIsVariantEnabledEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsVariantEnabledEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsVariantEnabledEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsVariantEnabledEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsVariantEnabledEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsVariantEnabledEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsVariantEnabledEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsVariantEnabledEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsVariantEnabledEXT_Idx) = get_ts();
        }


	return retval;

}