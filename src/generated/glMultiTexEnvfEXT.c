#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexEnvfEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glMultiTexEnvfEXT_Idx))


GLAPI void  APIENTRY glMultiTexEnvfEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexEnvfEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexEnvfEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexEnvfEXT");
            if(!GL_ENTRY_PTR(glMultiTexEnvfEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexEnvfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexEnvfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexEnvfEXT_wrp(texunit,target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexEnvfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexEnvfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexEnvfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexEnvfEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexEnvfEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexEnvfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnvfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexEnvfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexEnvfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexEnvfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexEnvfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexEnvfEXT_Idx) = get_ts();
        }


	

}