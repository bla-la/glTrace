#include <glTraceCommon.h>
#include <generated.h>

#define glApplyTextureEXT_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glApplyTextureEXT_Idx))


GLAPI void  APIENTRY glApplyTextureEXT(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glApplyTextureEXT_Idx))
	{
            GL_ENTRY_PTR(glApplyTextureEXT_Idx) = dlsym(RTLD_NEXT,"glApplyTextureEXT");
            if(!GL_ENTRY_PTR(glApplyTextureEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glApplyTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glApplyTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glApplyTextureEXT_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glApplyTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glApplyTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glApplyTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glApplyTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glApplyTextureEXT_Idx));
        if(last_diff > 1000000000){
            printf("glApplyTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glApplyTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glApplyTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glApplyTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glApplyTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glApplyTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glApplyTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glApplyTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glApplyTextureEXT_Idx) = get_ts();
        }


	

}