#include <glTraceCommon.h>
#include <generated.h>

#define glClearColorIuiEXT_wrp						\
    ((void  (*)(GLuint red,GLuint green,GLuint blue,GLuint alpha                                        \
    ))GL_ENTRY_PTR(glClearColorIuiEXT_Idx))


GLAPI void  APIENTRY glClearColorIuiEXT(GLuint red,GLuint green,GLuint blue,GLuint alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearColorIuiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearColorIuiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearColorIuiEXT_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearColorIuiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearColorIuiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glClearColorIuiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearColorIuiEXT_Idx),
				 GL_ENTRY_LAST_TS(glClearColorIuiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glClearColorIuiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearColorIuiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorIuiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorIuiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearColorIuiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearColorIuiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearColorIuiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearColorIuiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearColorIuiEXT_Idx) = get_ts();
        }


	

}