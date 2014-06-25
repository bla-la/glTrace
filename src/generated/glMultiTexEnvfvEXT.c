#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexEnvfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glMultiTexEnvfvEXT_Idx))


GLAPI void  APIENTRY glMultiTexEnvfvEXT(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexEnvfvEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexEnvfvEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexEnvfvEXT");
            if(!GL_ENTRY_PTR(glMultiTexEnvfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexEnvfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexEnvfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexEnvfvEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexEnvfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexEnvfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexEnvfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexEnvfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexEnvfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexEnvfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexEnvfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexEnvfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexEnvfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexEnvfvEXT_Idx) = get_ts();
        }


	

}