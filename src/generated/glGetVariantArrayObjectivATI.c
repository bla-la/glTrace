#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantArrayObjectivATI_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVariantArrayObjectivATI_Idx))


GLAPI void  APIENTRY glGetVariantArrayObjectivATI(GLuint id,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVariantArrayObjectivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantArrayObjectivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantArrayObjectivATI_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantArrayObjectivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantArrayObjectivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantArrayObjectivATI_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantArrayObjectivATI_Idx));


        if(last_diff > 1000000000){
            printf("glGetVariantArrayObjectivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantArrayObjectivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantArrayObjectivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantArrayObjectivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantArrayObjectivATI_Idx) = get_ts();
        }


	

}