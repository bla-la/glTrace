#include <glTraceCommon.h>
#include <generated.h>

#define glProgramNamedParameter4dvNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glProgramNamedParameter4dvNV_Idx))


GLAPI void  APIENTRY glProgramNamedParameter4dvNV(GLuint id,GLsizei len,const GLubyte *name,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramNamedParameter4dvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramNamedParameter4dvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramNamedParameter4dvNV_wrp(id,len,name,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramNamedParameter4dvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramNamedParameter4dvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramNamedParameter4dvNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramNamedParameter4dvNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramNamedParameter4dvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramNamedParameter4dvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramNamedParameter4dvNV_Idx) = get_ts();
        }


	

}