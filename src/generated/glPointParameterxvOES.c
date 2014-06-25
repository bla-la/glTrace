#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterxvOES_wrp						\
    ((void  (*)(GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glPointParameterxvOES_Idx))


GLAPI void  APIENTRY glPointParameterxvOES(GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameterxvOES_Idx))
	{
            GL_ENTRY_PTR(glPointParameterxvOES_Idx) = dlsym(RTLD_NEXT,"glPointParameterxvOES");
            if(!GL_ENTRY_PTR(glPointParameterxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterxvOES_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterxvOES_Idx) = get_ts();
        }


	

}