#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTexParameteriv_Idx))


GLAPI void  APIENTRY glTexParameteriv(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glTexParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameteriv_Idx) = get_ts();
        }


	

}