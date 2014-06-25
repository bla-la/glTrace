#include <glTraceCommon.h>
#include <generated.h>

#define glCullParameterfvEXT_wrp						\
    ((void  (*)(GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glCullParameterfvEXT_Idx))


GLAPI void  APIENTRY glCullParameterfvEXT(GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCullParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glCullParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glCullParameterfvEXT");
            if(!GL_ENTRY_PTR(glCullParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCullParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCullParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCullParameterfvEXT_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCullParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCullParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCullParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCullParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glCullParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCullParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCullParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCullParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCullParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCullParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCullParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCullParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCullParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCullParameterfvEXT_Idx) = get_ts();
        }


	

}