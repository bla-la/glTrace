#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectParameterivARB_wrp						\
    ((void  (*)(GLhandleARB obj,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetObjectParameterivARB_Idx))


GLAPI void  APIENTRY glGetObjectParameterivARB(GLhandleARB obj,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectParameterivARB_Idx))
	{
            GL_ENTRY_PTR(glGetObjectParameterivARB_Idx) = dlsym(RTLD_NEXT,"glGetObjectParameterivARB");
            if(!GL_ENTRY_PTR(glGetObjectParameterivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectParameterivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectParameterivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectParameterivARB_wrp(obj,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectParameterivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectParameterivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectParameterivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectParameterivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectParameterivARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectParameterivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectParameterivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectParameterivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectParameterivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectParameterivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectParameterivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectParameterivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectParameterivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectParameterivARB_Idx) = get_ts();
        }


	

}