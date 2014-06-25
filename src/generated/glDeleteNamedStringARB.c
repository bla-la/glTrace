#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteNamedStringARB_wrp						\
    ((void  (*)(GLint namelen,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glDeleteNamedStringARB_Idx))


GLAPI void  APIENTRY glDeleteNamedStringARB(GLint namelen,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteNamedStringARB_Idx))
	{
            GL_ENTRY_PTR(glDeleteNamedStringARB_Idx) = dlsym(RTLD_NEXT,"glDeleteNamedStringARB");
            if(!GL_ENTRY_PTR(glDeleteNamedStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteNamedStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteNamedStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteNamedStringARB_wrp(namelen,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteNamedStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteNamedStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteNamedStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteNamedStringARB_Idx),
				 GL_ENTRY_LAST_TS(glDeleteNamedStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteNamedStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteNamedStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteNamedStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteNamedStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteNamedStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteNamedStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteNamedStringARB_Idx) = get_ts();
        }


	

}