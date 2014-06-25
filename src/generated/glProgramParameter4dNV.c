#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameter4dNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glProgramParameter4dNV_Idx))


GLAPI void  APIENTRY glProgramParameter4dNV(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramParameter4dNV_Idx))
	{
            GL_ENTRY_PTR(glProgramParameter4dNV_Idx) = dlsym(RTLD_NEXT,"glProgramParameter4dNV");
            if(!GL_ENTRY_PTR(glProgramParameter4dNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramParameter4dNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameter4dNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameter4dNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameter4dNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameter4dNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameter4dNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameter4dNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameter4dNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramParameter4dNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameter4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4dNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4dNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameter4dNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameter4dNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameter4dNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameter4dNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameter4dNV_Idx) = get_ts();
        }


	

}