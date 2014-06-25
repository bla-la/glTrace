#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniformARB_wrp						\
    ((void  (*)(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name                                        \
    ))GL_ENTRY_PTR(glGetActiveUniformARB_Idx))


GLAPI void  APIENTRY glGetActiveUniformARB(GLhandleARB programObj,GLuint index,GLsizei maxLength,GLsizei *length,GLint *size,GLenum *type,GLcharARB *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveUniformARB_Idx))
	{
            GL_ENTRY_PTR(glGetActiveUniformARB_Idx) = dlsym(RTLD_NEXT,"glGetActiveUniformARB");
            if(!GL_ENTRY_PTR(glGetActiveUniformARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveUniformARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniformARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniformARB_wrp(programObj,index,maxLength,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniformARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniformARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniformARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniformARB_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniformARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveUniformARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniformARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniformARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniformARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniformARB_Idx) = get_ts();
        }


	

}