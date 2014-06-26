#include <glTraceCommon.h>
#include <generated.h>

#define glGetSeparableFilterEXT_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span                                        \
    ))GL_ENTRY_PTR(glGetSeparableFilterEXT_Idx))


GLAPI void  APIENTRY glGetSeparableFilterEXT(GLenum target,GLenum format,GLenum type,void *row,void *column,void *span)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSeparableFilterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSeparableFilterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSeparableFilterEXT_wrp(target,format,type,row,column,span);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSeparableFilterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSeparableFilterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSeparableFilterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSeparableFilterEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetSeparableFilterEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetSeparableFilterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSeparableFilterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSeparableFilterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSeparableFilterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSeparableFilterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSeparableFilterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSeparableFilterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSeparableFilterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSeparableFilterEXT_Idx) = get_ts();
        }


	

}