#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexLevelParameterfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexLevelParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexLevelParameterfvEXT(GLenum texunit,GLenum target,GLint level,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultiTexLevelParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMultiTexLevelParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetMultiTexLevelParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetMultiTexLevelParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexLevelParameterfvEXT_wrp(texunit,target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexLevelParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexLevelParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultiTexLevelParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterfvEXT_Idx) = get_ts();
        }


	

}