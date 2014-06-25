#include <glTraceCommon.h>
#include <generated.h>

#define glGetMinmaxParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMinmaxParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetMinmaxParameterfvEXT(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMinmaxParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMinmaxParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetMinmaxParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetMinmaxParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMinmaxParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMinmaxParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMinmaxParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMinmaxParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMinmaxParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMinmaxParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMinmaxParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMinmaxParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMinmaxParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMinmaxParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMinmaxParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMinmaxParameterfvEXT_Idx) = get_ts();
        }


	

}