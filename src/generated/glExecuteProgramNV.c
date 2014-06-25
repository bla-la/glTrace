#include <glTraceCommon.h>
#include <generated.h>

#define glExecuteProgramNV_wrp						\
    ((void  (*)(GLenum target,GLuint id,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glExecuteProgramNV_Idx))


GLAPI void  APIENTRY glExecuteProgramNV(GLenum target,GLuint id,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExecuteProgramNV_Idx))
	{
            GL_ENTRY_PTR(glExecuteProgramNV_Idx) = dlsym(RTLD_NEXT,"glExecuteProgramNV");
            if(!GL_ENTRY_PTR(glExecuteProgramNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExecuteProgramNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glExecuteProgramNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExecuteProgramNV_wrp(target,id,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExecuteProgramNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExecuteProgramNV_Idx) ++;

        GL_ENTRY_LAST_TS(glExecuteProgramNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExecuteProgramNV_Idx),
				 GL_ENTRY_LAST_TS(glExecuteProgramNV_Idx));
        if(last_diff > 1000000000){
            printf("glExecuteProgramNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExecuteProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glExecuteProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glExecuteProgramNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glExecuteProgramNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExecuteProgramNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExecuteProgramNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExecuteProgramNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExecuteProgramNV_Idx) = get_ts();
        }


	

}