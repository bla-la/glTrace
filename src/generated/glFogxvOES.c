#include <glTraceCommon.h>
#include <generated.h>

#define glFogxvOES_wrp						\
    ((void  (*)(GLenum pname,const GLfixed *param                                        \
    ))GL_ENTRY_PTR(glFogxvOES_Idx))


GLAPI void  APIENTRY glFogxvOES(GLenum pname,const GLfixed *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogxvOES_Idx))
	{
            GL_ENTRY_PTR(glFogxvOES_Idx) = dlsym(RTLD_NEXT,"glFogxvOES");
            if(!GL_ENTRY_PTR(glFogxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogxvOES_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFogxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogxvOES_Idx),
				 GL_ENTRY_LAST_TS(glFogxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glFogxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glFogxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glFogxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogxvOES_Idx) = get_ts();
        }


	

}