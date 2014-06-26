#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameter4fvNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glProgramParameter4fvNV_Idx))


GLAPI void  APIENTRY glProgramParameter4fvNV(GLenum target,GLuint index,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramParameter4fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameter4fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameter4fvNV_wrp(target,index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameter4fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameter4fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameter4fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameter4fvNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameter4fvNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramParameter4fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameter4fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameter4fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameter4fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameter4fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameter4fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameter4fvNV_Idx) = get_ts();
        }


	

}