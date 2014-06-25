#include <glTraceCommon.h>
#include <generated.h>

#define glGetMinmaxParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMinmaxParameterivEXT_Idx))


GLAPI void  APIENTRY glGetMinmaxParameterivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMinmaxParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMinmaxParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetMinmaxParameterivEXT");
            if(!GL_ENTRY_PTR(glGetMinmaxParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMinmaxParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMinmaxParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMinmaxParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMinmaxParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMinmaxParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMinmaxParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMinmaxParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMinmaxParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMinmaxParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMinmaxParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMinmaxParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMinmaxParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMinmaxParameterivEXT_Idx) = get_ts();
        }


	

}