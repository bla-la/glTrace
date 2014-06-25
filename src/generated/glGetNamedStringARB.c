#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedStringARB_wrp						\
    ((void  (*)(GLint namelen,const GLchar *name,GLsizei bufSize,GLint *stringlen,GLchar *string                                        \
    ))GL_ENTRY_PTR(glGetNamedStringARB_Idx))


GLAPI void  APIENTRY glGetNamedStringARB(GLint namelen,const GLchar *name,GLsizei bufSize,GLint *stringlen,GLchar *string)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedStringARB_Idx))
	{
            GL_ENTRY_PTR(glGetNamedStringARB_Idx) = dlsym(RTLD_NEXT,"glGetNamedStringARB");
            if(!GL_ENTRY_PTR(glGetNamedStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedStringARB_wrp(namelen,name,bufSize,stringlen,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedStringARB_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedStringARB_Idx) = get_ts();
        }


	

}