#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetTexLevelParameterivQCOM_wrp						\
    ((void  (*)(GLuint texture,GLenum face,GLint level,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glExtGetTexLevelParameterivQCOM_Idx))


GLAPI void  APIENTRY glExtGetTexLevelParameterivQCOM(GLuint texture,GLenum face,GLint level,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtGetTexLevelParameterivQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtGetTexLevelParameterivQCOM_Idx) = dlsym(RTLD_NEXT,"glExtGetTexLevelParameterivQCOM");
            if(!GL_ENTRY_PTR(glExtGetTexLevelParameterivQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtGetTexLevelParameterivQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetTexLevelParameterivQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetTexLevelParameterivQCOM_wrp(texture,face,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetTexLevelParameterivQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetTexLevelParameterivQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetTexLevelParameterivQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetTexLevelParameterivQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetTexLevelParameterivQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtGetTexLevelParameterivQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetTexLevelParameterivQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexLevelParameterivQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexLevelParameterivQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetTexLevelParameterivQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetTexLevelParameterivQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetTexLevelParameterivQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetTexLevelParameterivQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetTexLevelParameterivQCOM_Idx) = get_ts();
        }


	

}