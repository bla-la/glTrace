#include <glTraceCommon.h>
#include <generated.h>

#define glImageTransformParameteriHP_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glImageTransformParameteriHP_Idx))


GLAPI void  APIENTRY glImageTransformParameteriHP(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glImageTransformParameteriHP_Idx))
	{
            GL_ENTRY_PTR(glImageTransformParameteriHP_Idx) = dlsym(RTLD_NEXT,"glImageTransformParameteriHP");
            if(!GL_ENTRY_PTR(glImageTransformParameteriHP_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glImageTransformParameteriHP_Idx))
    	{
            GL_ENTRY_PREV_TS(glImageTransformParameteriHP_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glImageTransformParameteriHP_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glImageTransformParameteriHP_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glImageTransformParameteriHP_Idx) ++;

        GL_ENTRY_LAST_TS(glImageTransformParameteriHP_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glImageTransformParameteriHP_Idx),
				 GL_ENTRY_LAST_TS(glImageTransformParameteriHP_Idx));
        if(last_diff > 1000000000){
            printf("glImageTransformParameteriHP %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glImageTransformParameteriHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameteriHP_Idx),
	             GL_ENTRY_CALL_TIME(glImageTransformParameteriHP_Idx) /
	             GL_ENTRY_CALL_COUNT(glImageTransformParameteriHP_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glImageTransformParameteriHP_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glImageTransformParameteriHP_Idx) = 0;
             GL_ENTRY_CALL_TIME(glImageTransformParameteriHP_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glImageTransformParameteriHP_Idx) = get_ts();
        }


	

}