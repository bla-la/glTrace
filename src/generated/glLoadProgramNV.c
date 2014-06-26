#include <glTraceCommon.h>
#include <generated.h>

#define glLoadProgramNV_wrp						\
    ((void  (*)(GLenum target,GLuint id,GLsizei len,const GLubyte *program                                        \
    ))GL_ENTRY_PTR(glLoadProgramNV_Idx))


GLAPI void  APIENTRY glLoadProgramNV(GLenum target,GLuint id,GLsizei len,const GLubyte *program)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadProgramNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadProgramNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadProgramNV_wrp(target,id,len,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadProgramNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadProgramNV_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadProgramNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadProgramNV_Idx),
				 GL_ENTRY_LAST_TS(glLoadProgramNV_Idx));


        if(last_diff > 1000000000){
            printf("glLoadProgramNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glLoadProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glLoadProgramNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadProgramNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadProgramNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadProgramNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadProgramNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadProgramNV_Idx) = get_ts();
        }


	

}