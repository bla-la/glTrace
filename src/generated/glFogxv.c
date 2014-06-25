#include <glTraceCommon.h>
#include <generated.h>

#define glFogxv_wrp						\
    ((void  (*)(GLenum pname,const GLfixed *param                                        \
    ))GL_ENTRY_PTR(glFogxv_Idx))


GLAPI void  APIENTRY glFogxv(GLenum pname,const GLfixed *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFogxv_Idx))
	{
            GL_ENTRY_PTR(glFogxv_Idx) = dlsym(RTLD_NEXT,"glFogxv");
            if(!GL_ENTRY_PTR(glFogxv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFogxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogxv_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogxv_Idx) ++;

        GL_ENTRY_LAST_TS(glFogxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogxv_Idx),
				 GL_ENTRY_LAST_TS(glFogxv_Idx));
        if(last_diff > 1000000000){
            printf("glFogxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogxv_Idx),
	             GL_ENTRY_CALL_TIME(glFogxv_Idx),
	             GL_ENTRY_CALL_TIME(glFogxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogxv_Idx) = get_ts();
        }


	

}