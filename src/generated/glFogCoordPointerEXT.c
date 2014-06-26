#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordPointerEXT_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glFogCoordPointerEXT_Idx))


GLAPI void  APIENTRY glFogCoordPointerEXT(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordPointerEXT_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordPointerEXT_Idx) = get_ts();
        }


	

}