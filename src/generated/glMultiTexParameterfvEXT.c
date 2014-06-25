#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexParameterfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glMultiTexParameterfvEXT_Idx))


GLAPI void  APIENTRY glMultiTexParameterfvEXT(GLenum texunit,GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexParameterfvEXT");
            if(!GL_ENTRY_PTR(glMultiTexParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexParameterfvEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexParameterfvEXT_Idx) = get_ts();
        }


	

}