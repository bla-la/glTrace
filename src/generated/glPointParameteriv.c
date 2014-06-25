#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameteriv_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glPointParameteriv_Idx))


GLAPI void  APIENTRY glPointParameteriv(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameteriv_Idx))
	{
            GL_ENTRY_PTR(glPointParameteriv_Idx) = dlsym(RTLD_NEXT,"glPointParameteriv");
            if(!GL_ENTRY_PTR(glPointParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameteriv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glPointParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameteriv_Idx) = get_ts();
        }


	

}