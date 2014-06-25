#include <glTraceCommon.h>
#include <generated.h>

#define glGetShaderSourceARB_wrp						\
    ((void  (*)(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *source                                        \
    ))GL_ENTRY_PTR(glGetShaderSourceARB_Idx))


GLAPI void  APIENTRY glGetShaderSourceARB(GLhandleARB obj,GLsizei maxLength,GLsizei *length,GLcharARB *source)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetShaderSourceARB_Idx))
	{
            GL_ENTRY_PTR(glGetShaderSourceARB_Idx) = dlsym(RTLD_NEXT,"glGetShaderSourceARB");
            if(!GL_ENTRY_PTR(glGetShaderSourceARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetShaderSourceARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetShaderSourceARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetShaderSourceARB_wrp(obj,maxLength,length,source);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetShaderSourceARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetShaderSourceARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetShaderSourceARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetShaderSourceARB_Idx),
				 GL_ENTRY_LAST_TS(glGetShaderSourceARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetShaderSourceARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetShaderSourceARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderSourceARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderSourceARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetShaderSourceARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetShaderSourceARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetShaderSourceARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetShaderSourceARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetShaderSourceARB_Idx) = get_ts();
        }


	

}