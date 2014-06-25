#include <glTraceCommon.h>
#include <generated.h>

#define glGetImageTransformParameterfvHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetImageTransformParameterfvHP_Idx))


GLAPI void  APIENTRY glGetImageTransformParameterfvHP(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetImageTransformParameterfvHP_Idx))
	{
            GL_ENTRY_PTR(glGetImageTransformParameterfvHP_Idx) = dlsym(RTLD_NEXT,"glGetImageTransformParameterfvHP");
            if(!GL_ENTRY_PTR(glGetImageTransformParameterfvHP_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetImageTransformParameterfvHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetImageTransformParameterfvHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetImageTransformParameterfvHP_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetImageTransformParameterfvHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetImageTransformParameterfvHP_Idx) ++;

        GL_ENTRY_LAST_TS(glGetImageTransformParameterfvHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetImageTransformParameterfvHP_Idx),
				 GL_ENTRY_LAST_TS(glGetImageTransformParameterfvHP_Idx));
        if(last_diff > 1000000000){
            printf("glGetImageTransformParameterfvHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterfvHP_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageTransformParameterfvHP_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageTransformParameterfvHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterfvHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetImageTransformParameterfvHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterfvHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetImageTransformParameterfvHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetImageTransformParameterfvHP_Idx) = get_ts();
        }


	

}