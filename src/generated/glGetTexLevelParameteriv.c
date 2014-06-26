#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexLevelParameteriv_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexLevelParameteriv_Idx))


GLAPI void  APIENTRY glGetTexLevelParameteriv(GLenum target,GLint level,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexLevelParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexLevelParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexLevelParameteriv_wrp(target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexLevelParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexLevelParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexLevelParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexLevelParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexLevelParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexLevelParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexLevelParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexLevelParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexLevelParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexLevelParameteriv_Idx) = get_ts();
        }


	

}