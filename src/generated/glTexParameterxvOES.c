#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glTexParameterxvOES_Idx))


GLAPI void  APIENTRY glTexParameterxvOES(GLenum target,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterxvOES_Idx) = get_ts();
        }


	

}