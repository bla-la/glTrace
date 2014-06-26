#include <glTraceCommon.h>
#include <generated.h>

#define glVariantivEXT_wrp						\
    ((void  (*)(GLuint id,const GLint *addr                                        \
    ))GL_ENTRY_PTR(glVariantivEXT_Idx))


GLAPI void  APIENTRY glVariantivEXT(GLuint id,const GLint *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantivEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVariantivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantivEXT_Idx) = get_ts();
        }


	

}