#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVariantClientStateEXT_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glDisableVariantClientStateEXT_Idx))


GLAPI void  APIENTRY glDisableVariantClientStateEXT(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableVariantClientStateEXT_Idx))
	{
            GL_ENTRY_PTR(glDisableVariantClientStateEXT_Idx) = dlsym(RTLD_NEXT,"glDisableVariantClientStateEXT");
            if(!GL_ENTRY_PTR(glDisableVariantClientStateEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableVariantClientStateEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVariantClientStateEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVariantClientStateEXT_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVariantClientStateEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVariantClientStateEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVariantClientStateEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVariantClientStateEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableVariantClientStateEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDisableVariantClientStateEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVariantClientStateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVariantClientStateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVariantClientStateEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVariantClientStateEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVariantClientStateEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVariantClientStateEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVariantClientStateEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVariantClientStateEXT_Idx) = get_ts();
        }


	

}