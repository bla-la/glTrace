#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedStringivARB_wrp						\
    ((void  (*)(GLint namelen,const GLchar *name,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedStringivARB_Idx))


GLAPI void  APIENTRY glGetNamedStringivARB(GLint namelen,const GLchar *name,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedStringivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedStringivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedStringivARB_wrp(namelen,name,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedStringivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedStringivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedStringivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedStringivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedStringivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedStringivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedStringivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedStringivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedStringivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedStringivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedStringivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedStringivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedStringivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedStringivARB_Idx) = get_ts();
        }


	

}