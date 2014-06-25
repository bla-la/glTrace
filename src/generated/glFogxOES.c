#include <glTraceCommon.h>
#include <generated.h>

#define glFogxOES_wrp						\
    ((void  (*)(GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glFogxOES_Idx))


GLAPI void  APIENTRY glFogxOES(GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogxOES_Idx))
	{
            GL_ENTRY_PTR(glFogxOES_Idx) = dlsym(RTLD_NEXT,"glFogxOES");
            if(!GL_ENTRY_PTR(glFogxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogxOES_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFogxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogxOES_Idx),
				 GL_ENTRY_LAST_TS(glFogxOES_Idx));
        if(last_diff > 1000000000){
            printf("glFogxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFogxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFogxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogxOES_Idx) = get_ts();
        }


	

}