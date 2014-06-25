#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantBooleanvEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLboolean *data                                        \
    ))GL_ENTRY_PTR(glGetVariantBooleanvEXT_Idx))


GLAPI void  APIENTRY glGetVariantBooleanvEXT(GLuint id,GLenum value,GLboolean *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVariantBooleanvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetVariantBooleanvEXT_Idx) = dlsym(RTLD_NEXT,"glGetVariantBooleanvEXT");
            if(!GL_ENTRY_PTR(glGetVariantBooleanvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVariantBooleanvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantBooleanvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantBooleanvEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantBooleanvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantBooleanvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantBooleanvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantBooleanvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantBooleanvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetVariantBooleanvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantBooleanvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantBooleanvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantBooleanvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantBooleanvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantBooleanvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantBooleanvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantBooleanvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantBooleanvEXT_Idx) = get_ts();
        }


	

}