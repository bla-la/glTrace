#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathParameterfvNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,GLfloat *value                                        \
    ))GL_ENTRY_PTR(glGetPathParameterfvNV_Idx))


GLAPI void  APIENTRY glGetPathParameterfvNV(GLuint path,GLenum pname,GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathParameterfvNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathParameterfvNV_Idx) = dlsym(RTLD_NEXT,"glGetPathParameterfvNV");
            if(!GL_ENTRY_PTR(glGetPathParameterfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathParameterfvNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathParameterfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathParameterfvNV_Idx) = get_ts();
        }


	

}