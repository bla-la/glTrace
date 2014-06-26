#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParametersI4uivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLsizei count,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glProgramLocalParametersI4uivNV_Idx))


GLAPI void  APIENTRY glProgramLocalParametersI4uivNV(GLenum target,GLuint index,GLsizei count,const GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramLocalParametersI4uivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParametersI4uivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParametersI4uivNV_wrp(target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParametersI4uivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParametersI4uivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParametersI4uivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParametersI4uivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParametersI4uivNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramLocalParametersI4uivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParametersI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParametersI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParametersI4uivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParametersI4uivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParametersI4uivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParametersI4uivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParametersI4uivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParametersI4uivNV_Idx) = get_ts();
        }


	

}