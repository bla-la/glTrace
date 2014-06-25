#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathParameterivNV_wrp						\
    ((void  (*)(GLuint path,GLenum pname,GLint *value                                        \
    ))GL_ENTRY_PTR(glGetPathParameterivNV_Idx))


GLAPI void  APIENTRY glGetPathParameterivNV(GLuint path,GLenum pname,GLint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathParameterivNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathParameterivNV_Idx) = dlsym(RTLD_NEXT,"glGetPathParameterivNV");
            if(!GL_ENTRY_PTR(glGetPathParameterivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathParameterivNV_wrp(path,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathParameterivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathParameterivNV_Idx) = get_ts();
        }


	

}