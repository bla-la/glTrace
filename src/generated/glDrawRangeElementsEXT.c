#include <glTraceCommon.h>
#include <generated.h>

#define glDrawRangeElementsEXT_wrp						\
    ((void  (*)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices                                        \
    ))GL_ENTRY_PTR(glDrawRangeElementsEXT_Idx))


GLAPI void  APIENTRY glDrawRangeElementsEXT(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawRangeElementsEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawRangeElementsEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawRangeElementsEXT_wrp(mode,start,end,count,type,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawRangeElementsEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawRangeElementsEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawRangeElementsEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawRangeElementsEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawRangeElementsEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDrawRangeElementsEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementsEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementsEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawRangeElementsEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawRangeElementsEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawRangeElementsEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawRangeElementsEXT_Idx) = get_ts();
        }


	

}