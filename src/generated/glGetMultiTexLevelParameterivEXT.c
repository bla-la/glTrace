#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexLevelParameterivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexLevelParameterivEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexLevelParameterivEXT(GLenum texunit,GLenum target,GLint level,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultiTexLevelParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetMultiTexLevelParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetMultiTexLevelParameterivEXT");
            if(!GL_ENTRY_PTR(glGetMultiTexLevelParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexLevelParameterivEXT_wrp(texunit,target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexLevelParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexLevelParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultiTexLevelParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexLevelParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexLevelParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexLevelParameterivEXT_Idx) = get_ts();
        }


	

}