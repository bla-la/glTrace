#include <glTraceCommon.h>
#include <generated.h>

#define glIsNamedStringARB_wrp						\
    ((GLboolean  (*)(GLint namelen,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glIsNamedStringARB_Idx))


GLAPI GLboolean  APIENTRY glIsNamedStringARB(GLint namelen,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsNamedStringARB_Idx))
	{
            GL_ENTRY_PTR(glIsNamedStringARB_Idx) = dlsym(RTLD_NEXT,"glIsNamedStringARB");
            if(!GL_ENTRY_PTR(glIsNamedStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsNamedStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsNamedStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsNamedStringARB_wrp(namelen,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsNamedStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsNamedStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glIsNamedStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsNamedStringARB_Idx),
				 GL_ENTRY_LAST_TS(glIsNamedStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glIsNamedStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsNamedStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsNamedStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsNamedStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsNamedStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsNamedStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsNamedStringARB_Idx) = get_ts();
        }


	return retval;

}