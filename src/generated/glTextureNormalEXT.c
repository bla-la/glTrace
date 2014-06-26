#include <glTraceCommon.h>
#include <generated.h>

#define glTextureNormalEXT_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glTextureNormalEXT_Idx))


GLAPI void  APIENTRY glTextureNormalEXT(GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureNormalEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureNormalEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureNormalEXT_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureNormalEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureNormalEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureNormalEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureNormalEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureNormalEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureNormalEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureNormalEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureNormalEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureNormalEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureNormalEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureNormalEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureNormalEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureNormalEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureNormalEXT_Idx) = get_ts();
        }


	

}