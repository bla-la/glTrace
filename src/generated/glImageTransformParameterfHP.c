#include <glTraceCommon.h>
#include <generated.h>

#define glImageTransformParameterfHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glImageTransformParameterfHP_Idx))


GLAPI void  APIENTRY glImageTransformParameterfHP(GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glImageTransformParameterfHP_Idx))
	{
            GL_ENTRY_PTR(glImageTransformParameterfHP_Idx) = dlsym(RTLD_NEXT,"glImageTransformParameterfHP");
            if(!GL_ENTRY_PTR(glImageTransformParameterfHP_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glImageTransformParameterfHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glImageTransformParameterfHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glImageTransformParameterfHP_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glImageTransformParameterfHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glImageTransformParameterfHP_Idx) ++;

        GL_ENTRY_LAST_TS(glImageTransformParameterfHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glImageTransformParameterfHP_Idx),
				 GL_ENTRY_LAST_TS(glImageTransformParameterfHP_Idx));
        if(last_diff > 1000000000){
            printf("glImageTransformParameterfHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterfHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterfHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameterfHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glImageTransformParameterfHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glImageTransformParameterfHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glImageTransformParameterfHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glImageTransformParameterfHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glImageTransformParameterfHP_Idx) = get_ts();
        }


	

}