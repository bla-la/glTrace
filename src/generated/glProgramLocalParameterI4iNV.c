#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameterI4iNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameterI4iNV_Idx))


GLAPI void  APIENTRY glProgramLocalParameterI4iNV(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramLocalParameterI4iNV_Idx))
	{
            GL_ENTRY_PTR(glProgramLocalParameterI4iNV_Idx) = dlsym(RTLD_NEXT,"glProgramLocalParameterI4iNV");
            if(!GL_ENTRY_PTR(glProgramLocalParameterI4iNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramLocalParameterI4iNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameterI4iNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameterI4iNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameterI4iNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4iNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameterI4iNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameterI4iNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameterI4iNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramLocalParameterI4iNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4iNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4iNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4iNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4iNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameterI4iNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4iNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4iNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameterI4iNV_Idx) = get_ts();
        }


	

}