#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryivEXT_Idx))


GLAPI void  APIENTRY glGetQueryivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetQueryivEXT_Idx) = dlsym(RTLD_NEXT,"glGetQueryivEXT");
            if(!GL_ENTRY_PTR(glGetQueryivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryivEXT_Idx) = get_ts();
        }


	

}