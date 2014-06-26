#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantIntegervEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetVariantIntegervEXT_Idx))


GLAPI void  APIENTRY glGetVariantIntegervEXT(GLuint id,GLenum value,GLint *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVariantIntegervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantIntegervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantIntegervEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantIntegervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantIntegervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantIntegervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantIntegervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantIntegervEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVariantIntegervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantIntegervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantIntegervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantIntegervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantIntegervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantIntegervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantIntegervEXT_Idx) = get_ts();
        }


	

}