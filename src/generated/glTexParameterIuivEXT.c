#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterIuivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glTexParameterIuivEXT_Idx))


GLAPI void  APIENTRY glTexParameterIuivEXT(GLenum target,GLenum pname,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexParameterIuivEXT_Idx))
	{
            GL_ENTRY_PTR(glTexParameterIuivEXT_Idx) = dlsym(RTLD_NEXT,"glTexParameterIuivEXT");
            if(!GL_ENTRY_PTR(glTexParameterIuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterIuivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterIuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTexParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterIuivEXT_Idx) = get_ts();
        }


	

}