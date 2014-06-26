#include <glTraceCommon.h>
#include <generated.h>

#define glCompileShaderIncludeARB_wrp						\
    ((void  (*)(GLuint shader,GLsizei count,const GLchar *const*path,const GLint *length                                        \
    ))GL_ENTRY_PTR(glCompileShaderIncludeARB_Idx))


GLAPI void  APIENTRY glCompileShaderIncludeARB(GLuint shader,GLsizei count,const GLchar *const*path,const GLint *length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompileShaderIncludeARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompileShaderIncludeARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompileShaderIncludeARB_wrp(shader,count,path,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompileShaderIncludeARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompileShaderIncludeARB_Idx) ++;

        GL_ENTRY_LAST_TS(glCompileShaderIncludeARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompileShaderIncludeARB_Idx),
				 GL_ENTRY_LAST_TS(glCompileShaderIncludeARB_Idx));


        if(last_diff > 1000000000){
            printf("glCompileShaderIncludeARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompileShaderIncludeARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShaderIncludeARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShaderIncludeARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompileShaderIncludeARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompileShaderIncludeARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompileShaderIncludeARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompileShaderIncludeARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompileShaderIncludeARB_Idx) = get_ts();
        }


	

}