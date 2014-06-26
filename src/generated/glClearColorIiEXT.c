#include <glTraceCommon.h>
#include <generated.h>

#define glClearColorIiEXT_wrp						\
    ((void  (*)(GLint red,GLint green,GLint blue,GLint alpha                                        \
    ))GL_ENTRY_PTR(glClearColorIiEXT_Idx))


GLAPI void  APIENTRY glClearColorIiEXT(GLint red,GLint green,GLint blue,GLint alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearColorIiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearColorIiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearColorIiEXT_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearColorIiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearColorIiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glClearColorIiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearColorIiEXT_Idx),
				 GL_ENTRY_LAST_TS(glClearColorIiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glClearColorIiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearColorIiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorIiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorIiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearColorIiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearColorIiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearColorIiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearColorIiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearColorIiEXT_Idx) = get_ts();
        }


	

}