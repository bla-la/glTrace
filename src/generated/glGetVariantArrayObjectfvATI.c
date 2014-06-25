#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantArrayObjectfvATI_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVariantArrayObjectfvATI_Idx))


GLAPI void  APIENTRY glGetVariantArrayObjectfvATI(GLuint id,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVariantArrayObjectfvATI_Idx))
	{
            GL_ENTRY_PTR(glGetVariantArrayObjectfvATI_Idx) = dlsym(RTLD_NEXT,"glGetVariantArrayObjectfvATI");
            if(!GL_ENTRY_PTR(glGetVariantArrayObjectfvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVariantArrayObjectfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantArrayObjectfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantArrayObjectfvATI_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantArrayObjectfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantArrayObjectfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantArrayObjectfvATI_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantArrayObjectfvATI_Idx));
        if(last_diff > 1000000000){
            printf("glGetVariantArrayObjectfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantArrayObjectfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantArrayObjectfvATI_Idx) = get_ts();
        }


	

}