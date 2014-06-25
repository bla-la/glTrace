#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexParameterIuivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glMultiTexParameterIuivEXT_Idx))


GLAPI void  APIENTRY glMultiTexParameterIuivEXT(GLenum texunit,GLenum target,GLenum pname,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexParameterIuivEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexParameterIuivEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexParameterIuivEXT");
            if(!GL_ENTRY_PTR(glMultiTexParameterIuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexParameterIuivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexParameterIuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexParameterIuivEXT_Idx) = get_ts();
        }


	

}