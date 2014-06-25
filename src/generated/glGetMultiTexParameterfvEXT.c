#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexParameterfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexParameterfvEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultiTexParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMultiTexParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetMultiTexParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetMultiTexParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultiTexParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexParameterfvEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultiTexParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexParameterfvEXT_Idx) = get_ts();
        }


	

}