#include <glTraceCommon.h>
#include <generated.h>

#define glGetArrayObjectfvATI_wrp						\
    ((void  (*)(GLenum array,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetArrayObjectfvATI_Idx))


GLAPI void  APIENTRY glGetArrayObjectfvATI(GLenum array,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetArrayObjectfvATI_Idx))
	{
            GL_ENTRY_PTR(glGetArrayObjectfvATI_Idx) = dlsym(RTLD_NEXT,"glGetArrayObjectfvATI");
            if(!GL_ENTRY_PTR(glGetArrayObjectfvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetArrayObjectfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetArrayObjectfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetArrayObjectfvATI_wrp(array,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetArrayObjectfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetArrayObjectfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetArrayObjectfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetArrayObjectfvATI_Idx),
				 GL_ENTRY_LAST_TS(glGetArrayObjectfvATI_Idx));
        if(last_diff > 1000000000){
            printf("glGetArrayObjectfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetArrayObjectfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetArrayObjectfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetArrayObjectfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetArrayObjectfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetArrayObjectfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetArrayObjectfvATI_Idx) = get_ts();
        }


	

}