#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexParameterIivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexParameterIivEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexParameterIivEXT(GLenum texunit,GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultiTexParameterIivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMultiTexParameterIivEXT_Idx) = dlsym(RTLD_NEXT,"glGetMultiTexParameterIivEXT");
            if(!GL_ENTRY_PTR(glGetMultiTexParameterIivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultiTexParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexParameterIivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexParameterIivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultiTexParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexParameterIivEXT_Idx) = get_ts();
        }


	

}