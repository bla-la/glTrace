#include <glTraceCommon.h>
#include <generated.h>

#define glGetFixedvOES_wrp						\
    ((void  (*)(GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetFixedvOES_Idx))


GLAPI void  APIENTRY glGetFixedvOES(GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFixedvOES_Idx))
	{
            GL_ENTRY_PTR(glGetFixedvOES_Idx) = dlsym(RTLD_NEXT,"glGetFixedvOES");
            if(!GL_ENTRY_PTR(glGetFixedvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFixedvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFixedvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFixedvOES_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFixedvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFixedvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFixedvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFixedvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetFixedvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetFixedvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFixedvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetFixedvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetFixedvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFixedvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFixedvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFixedvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFixedvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFixedvOES_Idx) = get_ts();
        }


	

}