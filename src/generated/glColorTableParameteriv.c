#include <glTraceCommon.h>
#include <generated.h>

#define glColorTableParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glColorTableParameteriv_Idx))


GLAPI void  APIENTRY glColorTableParameteriv(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorTableParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTableParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTableParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTableParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTableParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTableParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTableParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glColorTableParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glColorTableParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTableParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTableParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTableParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTableParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTableParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTableParameteriv_Idx) = get_ts();
        }


	

}