#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterIuiv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glTexParameterIuiv_Idx))


GLAPI void  APIENTRY glTexParameterIuiv(GLenum target,GLenum pname,const GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameterIuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterIuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterIuiv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterIuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterIuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterIuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterIuiv_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterIuiv_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameterIuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterIuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterIuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterIuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterIuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterIuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterIuiv_Idx) = get_ts();
        }


	

}