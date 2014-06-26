#include <glTraceCommon.h>
#include <generated.h>

#define glBindMaterialParameterEXT_wrp						\
    ((GLuint  (*)(GLenum face,GLenum value                                        \
    ))GL_ENTRY_PTR(glBindMaterialParameterEXT_Idx))


GLAPI GLuint  APIENTRY glBindMaterialParameterEXT(GLenum face,GLenum value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindMaterialParameterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindMaterialParameterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glBindMaterialParameterEXT_wrp(face,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindMaterialParameterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindMaterialParameterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindMaterialParameterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindMaterialParameterEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindMaterialParameterEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBindMaterialParameterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindMaterialParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindMaterialParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindMaterialParameterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindMaterialParameterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindMaterialParameterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindMaterialParameterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindMaterialParameterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindMaterialParameterEXT_Idx) = get_ts();
        }


	return retval;

}