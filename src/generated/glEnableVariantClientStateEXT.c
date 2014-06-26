#include <glTraceCommon.h>
#include <generated.h>

#define glEnableVariantClientStateEXT_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glEnableVariantClientStateEXT_Idx))


GLAPI void  APIENTRY glEnableVariantClientStateEXT(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableVariantClientStateEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableVariantClientStateEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableVariantClientStateEXT_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableVariantClientStateEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableVariantClientStateEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableVariantClientStateEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableVariantClientStateEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableVariantClientStateEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEnableVariantClientStateEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableVariantClientStateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVariantClientStateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVariantClientStateEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableVariantClientStateEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableVariantClientStateEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableVariantClientStateEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableVariantClientStateEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableVariantClientStateEXT_Idx) = get_ts();
        }


	

}