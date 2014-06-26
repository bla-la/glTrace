#include <glTraceCommon.h>
#include <generated.h>

#define glGetVariantPointervEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,void **data                                        \
    ))GL_ENTRY_PTR(glGetVariantPointervEXT_Idx))


GLAPI void  APIENTRY glGetVariantPointervEXT(GLuint id,GLenum value,void **data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVariantPointervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVariantPointervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVariantPointervEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVariantPointervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVariantPointervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVariantPointervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVariantPointervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVariantPointervEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVariantPointervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVariantPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVariantPointervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVariantPointervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVariantPointervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVariantPointervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVariantPointervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVariantPointervEXT_Idx) = get_ts();
        }


	

}