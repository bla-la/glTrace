#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantFloatvEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLfloat *data                                        \
    ))GL_ENTRY_PTR(glGetVariantFloatvEXT_Idx))


GLAPI void  APIENTRY glGetVariantFloatvEXT(GLuint id,GLenum value,GLfloat *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVariantFloatvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantFloatvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantFloatvEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantFloatvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantFloatvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantFloatvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantFloatvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantFloatvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVariantFloatvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantFloatvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantFloatvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantFloatvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantFloatvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantFloatvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantFloatvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantFloatvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantFloatvEXT_Idx) = get_ts();
        }


	

}