#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexParameterIuivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexParameterIuivEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexParameterIuivEXT(GLenum texunit,GLenum target,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultiTexParameterIuivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMultiTexParameterIuivEXT_Idx) = dlsym(RTLD_NEXT,"glGetMultiTexParameterIuivEXT");
            if(!GL_ENTRY_PTR(glGetMultiTexParameterIuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultiTexParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexParameterIuivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexParameterIuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultiTexParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexParameterIuivEXT_Idx) = get_ts();
        }


	

}