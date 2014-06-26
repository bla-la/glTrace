#include <glTraceCommon.h>
#include <generated.h>

#define glGetTranslatedShaderSourceANGLE_wrp						\
    ((void  (*)(GLuint shader,GLsizei bufsize,GLsizei *length,GLchar *source                                        \
    ))GL_ENTRY_PTR(glGetTranslatedShaderSourceANGLE_Idx))


GLAPI void  APIENTRY glGetTranslatedShaderSourceANGLE(GLuint shader,GLsizei bufsize,GLsizei *length,GLchar *source)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTranslatedShaderSourceANGLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTranslatedShaderSourceANGLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTranslatedShaderSourceANGLE_wrp(shader,bufsize,length,source);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTranslatedShaderSourceANGLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTranslatedShaderSourceANGLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTranslatedShaderSourceANGLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTranslatedShaderSourceANGLE_Idx),
				 GL_ENTRY_LAST_TS(glGetTranslatedShaderSourceANGLE_Idx));


        if(last_diff > 1000000000){
            printf("glGetTranslatedShaderSourceANGLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTranslatedShaderSourceANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetTranslatedShaderSourceANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetTranslatedShaderSourceANGLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTranslatedShaderSourceANGLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTranslatedShaderSourceANGLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTranslatedShaderSourceANGLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTranslatedShaderSourceANGLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTranslatedShaderSourceANGLE_Idx) = get_ts();
        }


	

}