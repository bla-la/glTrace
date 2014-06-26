#include <glTraceCommon.h>
#include <generated.h>

#define glProgramNamedParameter4dNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glProgramNamedParameter4dNV_Idx))


GLAPI void  APIENTRY glProgramNamedParameter4dNV(GLuint id,GLsizei len,const GLubyte *name,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramNamedParameter4dNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramNamedParameter4dNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramNamedParameter4dNV_wrp(id,len,name,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramNamedParameter4dNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramNamedParameter4dNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramNamedParameter4dNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramNamedParameter4dNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramNamedParameter4dNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramNamedParameter4dNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4dNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramNamedParameter4dNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramNamedParameter4dNV_Idx) = get_ts();
        }


	

}