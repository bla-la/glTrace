#include <glTraceCommon.h>
#include <generated.h>

#define glImageTransformParameterfvHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glImageTransformParameterfvHP_Idx))


GLAPI void  APIENTRY glImageTransformParameterfvHP(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glImageTransformParameterfvHP_Idx))
	{
            GL_ENTRY_PTR(glImageTransformParameterfvHP_Idx) = dlsym(RTLD_NEXT,"glImageTransformParameterfvHP");
            if(!GL_ENTRY_PTR(glImageTransformParameterfvHP_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glImageTransformParameterfvHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glImageTransformParameterfvHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glImageTransformParameterfvHP_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glImageTransformParameterfvHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glImageTransformParameterfvHP_Idx) ++;

        GL_ENTRY_LAST_TS(glImageTransformParameterfvHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glImageTransformParameterfvHP_Idx),
				 GL_ENTRY_LAST_TS(glImageTransformParameterfvHP_Idx));
        if(last_diff > 1000000000){
            printf("glImageTransformParameterfvHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterfvHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterfvHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterfvHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterfvHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glImageTransformParameterfvHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glImageTransformParameterfvHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glImageTransformParameterfvHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glImageTransformParameterfvHP_Idx) = get_ts();
        }


	

}