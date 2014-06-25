#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexEnvivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMultiTexEnvivEXT_Idx))


GLAPI void  APIENTRY glMultiTexEnvivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexEnvivEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexEnvivEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexEnvivEXT");
            if(!GL_ENTRY_PTR(glMultiTexEnvivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexEnvivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexEnvivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexEnvivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexEnvivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexEnvivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexEnvivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexEnvivEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexEnvivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexEnvivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexEnvivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexEnvivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexEnvivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexEnvivEXT_Idx) = get_ts();
        }


	

}