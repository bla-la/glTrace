#include <glTraceCommon.h>
#include <generated.h>

#define glVariantfvEXT_wrp						\
    ((void  (*)(GLuint id,const GLfloat *addr                                        \
    ))GL_ENTRY_PTR(glVariantfvEXT_Idx))


GLAPI void  APIENTRY glVariantfvEXT(GLuint id,const GLfloat *addr)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVariantfvEXT_Idx))
	{
            GL_ENTRY_PTR(glVariantfvEXT_Idx) = dlsym(RTLD_NEXT,"glVariantfvEXT");
            if(!GL_ENTRY_PTR(glVariantfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVariantfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantfvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVariantfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantfvEXT_Idx) = get_ts();
        }


	

}