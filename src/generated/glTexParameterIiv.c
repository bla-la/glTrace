#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterIiv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTexParameterIiv_Idx))


GLAPI void  APIENTRY glTexParameterIiv(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameterIiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterIiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterIiv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterIiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterIiv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterIiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterIiv_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterIiv_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameterIiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterIiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterIiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterIiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterIiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterIiv_Idx) = get_ts();
        }


	

}