#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterxv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glTexParameterxv_Idx))


GLAPI void  APIENTRY glTexParameterxv(GLenum target,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameterxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterxv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterxv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterxv_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterxv_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameterxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterxv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterxv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterxv_Idx) = get_ts();
        }


	

}