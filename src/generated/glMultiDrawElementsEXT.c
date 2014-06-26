#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsEXT_wrp						\
    ((void  (*)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsEXT_Idx))


GLAPI void  APIENTRY glMultiDrawElementsEXT(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsEXT_wrp(mode,count,type,indices,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElementsEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsEXT_Idx) = get_ts();
        }


	

}