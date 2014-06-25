#include <glTraceCommon.h>
#include <generated.h>

#define glShaderSourceARB_wrp						\
    ((void  (*)(GLhandleARB shaderObj,GLsizei count,const GLcharARB **string,const GLint *length                                        \
    ))GL_ENTRY_PTR(glShaderSourceARB_Idx))


GLAPI void  APIENTRY glShaderSourceARB(GLhandleARB shaderObj,GLsizei count,const GLcharARB **string,const GLint *length)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderSourceARB_Idx))
	{
            GL_ENTRY_PTR(glShaderSourceARB_Idx) = dlsym(RTLD_NEXT,"glShaderSourceARB");
            if(!GL_ENTRY_PTR(glShaderSourceARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderSourceARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderSourceARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderSourceARB_wrp(shaderObj,count,string,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderSourceARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderSourceARB_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderSourceARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderSourceARB_Idx),
				 GL_ENTRY_LAST_TS(glShaderSourceARB_Idx));
        if(last_diff > 1000000000){
            printf("glShaderSourceARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderSourceARB_Idx),
	             GL_ENTRY_CALL_TIME(glShaderSourceARB_Idx),
	             GL_ENTRY_CALL_TIME(glShaderSourceARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderSourceARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderSourceARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderSourceARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderSourceARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderSourceARB_Idx) = get_ts();
        }


	

}