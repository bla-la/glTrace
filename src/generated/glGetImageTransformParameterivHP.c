#include <glTraceCommon.h>
#include <generated.h>

#define glGetImageTransformParameterivHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetImageTransformParameterivHP_Idx))


GLAPI void  APIENTRY glGetImageTransformParameterivHP(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetImageTransformParameterivHP_Idx))
	{
            GL_ENTRY_PTR(glGetImageTransformParameterivHP_Idx) = dlsym(RTLD_NEXT,"glGetImageTransformParameterivHP");
            if(!GL_ENTRY_PTR(glGetImageTransformParameterivHP_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetImageTransformParameterivHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetImageTransformParameterivHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetImageTransformParameterivHP_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetImageTransformParameterivHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetImageTransformParameterivHP_Idx) ++;

        GL_ENTRY_LAST_TS(glGetImageTransformParameterivHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetImageTransformParameterivHP_Idx),
				 GL_ENTRY_LAST_TS(glGetImageTransformParameterivHP_Idx));
        if(last_diff > 1000000000){
            printf("glGetImageTransformParameterivHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterivHP_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageTransformParameterivHP_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageTransformParameterivHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterivHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetImageTransformParameterivHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetImageTransformParameterivHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetImageTransformParameterivHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetImageTransformParameterivHP_Idx) = get_ts();
        }


	

}