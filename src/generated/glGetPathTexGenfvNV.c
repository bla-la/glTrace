#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathTexGenfvNV_wrp						\
    ((void  (*)(GLenum texCoordSet,GLenum pname,GLfloat *value                                        \
    ))GL_ENTRY_PTR(glGetPathTexGenfvNV_Idx))


GLAPI void  APIENTRY glGetPathTexGenfvNV(GLenum texCoordSet,GLenum pname,GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathTexGenfvNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathTexGenfvNV_Idx) = dlsym(RTLD_NEXT,"glGetPathTexGenfvNV");
            if(!GL_ENTRY_PTR(glGetPathTexGenfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathTexGenfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathTexGenfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathTexGenfvNV_wrp(texCoordSet,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathTexGenfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathTexGenfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathTexGenfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathTexGenfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathTexGenfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathTexGenfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathTexGenfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathTexGenfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathTexGenfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathTexGenfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathTexGenfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathTexGenfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathTexGenfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathTexGenfvNV_Idx) = get_ts();
        }


	

}