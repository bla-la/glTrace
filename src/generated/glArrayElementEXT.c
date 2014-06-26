#include <glTraceCommon.h>
#include <generated.h>

#define glArrayElementEXT_wrp						\
    ((void  (*)(GLint i                                        \
    ))GL_ENTRY_PTR(glArrayElementEXT_Idx))


GLAPI void  APIENTRY glArrayElementEXT(GLint i)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glArrayElementEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glArrayElementEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glArrayElementEXT_wrp(i);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glArrayElementEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glArrayElementEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glArrayElementEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glArrayElementEXT_Idx),
				 GL_ENTRY_LAST_TS(glArrayElementEXT_Idx));


        if(last_diff > 1000000000){
            printf("glArrayElementEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glArrayElementEXT_Idx),
	             GL_ENTRY_CALL_TIME(glArrayElementEXT_Idx),
	             GL_ENTRY_CALL_TIME(glArrayElementEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glArrayElementEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glArrayElementEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glArrayElementEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glArrayElementEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glArrayElementEXT_Idx) = get_ts();
        }


	

}