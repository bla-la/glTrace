#include <glTraceCommon.h>
#include <generated.h>

#define glStencilOpValueAMD_wrp						\
    ((void  (*)(GLenum face,GLuint value                                        \
    ))GL_ENTRY_PTR(glStencilOpValueAMD_Idx))


GLAPI void  APIENTRY glStencilOpValueAMD(GLenum face,GLuint value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilOpValueAMD_Idx))
	{
            GL_ENTRY_PTR(glStencilOpValueAMD_Idx) = dlsym(RTLD_NEXT,"glStencilOpValueAMD");
            if(!GL_ENTRY_PTR(glStencilOpValueAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilOpValueAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilOpValueAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilOpValueAMD_wrp(face,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilOpValueAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilOpValueAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilOpValueAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilOpValueAMD_Idx),
				 GL_ENTRY_LAST_TS(glStencilOpValueAMD_Idx));
        if(last_diff > 1000000000){
            printf("glStencilOpValueAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilOpValueAMD_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpValueAMD_Idx),
	             GL_ENTRY_CALL_TIME(glStencilOpValueAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilOpValueAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilOpValueAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilOpValueAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilOpValueAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilOpValueAMD_Idx) = get_ts();
        }


	

}