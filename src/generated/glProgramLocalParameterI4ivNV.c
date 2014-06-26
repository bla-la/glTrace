#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameterI4ivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLint *params                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameterI4ivNV_Idx))


GLAPI void  APIENTRY glProgramLocalParameterI4ivNV(GLenum target,GLuint index,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramLocalParameterI4ivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameterI4ivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameterI4ivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameterI4ivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4ivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameterI4ivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameterI4ivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameterI4ivNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramLocalParameterI4ivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4ivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4ivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4ivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4ivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameterI4ivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameterI4ivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameterI4ivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameterI4ivNV_Idx) = get_ts();
        }


	

}