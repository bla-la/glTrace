#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameterI4uiNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameterI4uiNV_Idx))


GLAPI void  APIENTRY glProgramLocalParameterI4uiNV(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramLocalParameterI4uiNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameterI4uiNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameterI4uiNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameterI4uiNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4uiNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameterI4uiNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameterI4uiNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameterI4uiNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramLocalParameterI4uiNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4uiNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4uiNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4uiNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4uiNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameterI4uiNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4uiNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4uiNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameterI4uiNV_Idx) = get_ts();
        }


	

}