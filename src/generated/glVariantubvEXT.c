#include <glTraceCommon.h>
#include <generated.h>

#define glVariantubvEXT_wrp						\
    ((void  (*)(GLuint id,const GLubyte *addr                                        \
    ))GL_ENTRY_PTR(glVariantubvEXT_Idx))


GLAPI void  APIENTRY glVariantubvEXT(GLuint id,const GLubyte *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantubvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantubvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantubvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantubvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantubvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantubvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantubvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantubvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVariantubvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantubvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantubvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantubvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantubvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantubvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantubvEXT_Idx) = get_ts();
        }


	

}