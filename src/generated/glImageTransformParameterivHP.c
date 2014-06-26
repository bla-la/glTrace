#include <glTraceCommon.h>
#include <generated.h>

#define glImageTransformParameterivHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glImageTransformParameterivHP_Idx))


GLAPI void  APIENTRY glImageTransformParameterivHP(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glImageTransformParameterivHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glImageTransformParameterivHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glImageTransformParameterivHP_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glImageTransformParameterivHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glImageTransformParameterivHP_Idx) ++;

        GL_ENTRY_LAST_TS(glImageTransformParameterivHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glImageTransformParameterivHP_Idx),
				 GL_ENTRY_LAST_TS(glImageTransformParameterivHP_Idx));


        if(last_diff > 1000000000){
            printf("glImageTransformParameterivHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterivHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterivHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterivHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterivHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glImageTransformParameterivHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glImageTransformParameterivHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glImageTransformParameterivHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glImageTransformParameterivHP_Idx) = get_ts();
        }


	

}