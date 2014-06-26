#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexEnvfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexEnvfvEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexEnvfvEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexEnvfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexEnvfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexEnvfvEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexEnvfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexEnvfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexEnvfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexEnvfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexEnvfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexEnvfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexEnvfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexEnvfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexEnvfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexEnvfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexEnvfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexEnvfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexEnvfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexEnvfvEXT_Idx) = get_ts();
        }


	

}