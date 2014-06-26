#include <glTraceCommon.h>
#include <generated.h>

#define glCullParameterdvEXT_wrp						\
    ((void  (*)(GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glCullParameterdvEXT_Idx))


GLAPI void  APIENTRY glCullParameterdvEXT(GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCullParameterdvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCullParameterdvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCullParameterdvEXT_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCullParameterdvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCullParameterdvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCullParameterdvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCullParameterdvEXT_Idx),
				 GL_ENTRY_LAST_TS(glCullParameterdvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCullParameterdvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCullParameterdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCullParameterdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCullParameterdvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCullParameterdvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCullParameterdvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCullParameterdvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCullParameterdvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCullParameterdvEXT_Idx) = get_ts();
        }


	

}