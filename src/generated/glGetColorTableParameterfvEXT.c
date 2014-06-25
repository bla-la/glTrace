#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetColorTableParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetColorTableParameterfvEXT(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetColorTableParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetColorTableParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetColorTableParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetColorTableParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetColorTableParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetColorTableParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableParameterfvEXT_Idx) = get_ts();
        }


	

}