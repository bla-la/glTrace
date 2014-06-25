#include <glTraceCommon.h>
#include <generated.h>

#define glGetArrayObjectivATI_wrp						\
    ((void  (*)(GLenum array,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetArrayObjectivATI_Idx))


GLAPI void  APIENTRY glGetArrayObjectivATI(GLenum array,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetArrayObjectivATI_Idx))
	{
            GL_ENTRY_PTR(glGetArrayObjectivATI_Idx) = dlsym(RTLD_NEXT,"glGetArrayObjectivATI");
            if(!GL_ENTRY_PTR(glGetArrayObjectivATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetArrayObjectivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetArrayObjectivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetArrayObjectivATI_wrp(array,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetArrayObjectivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetArrayObjectivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetArrayObjectivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetArrayObjectivATI_Idx),
				 GL_ENTRY_LAST_TS(glGetArrayObjectivATI_Idx));
        if(last_diff > 1000000000){
            printf("glGetArrayObjectivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetArrayObjectivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetArrayObjectivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetArrayObjectivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetArrayObjectivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetArrayObjectivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetArrayObjectivATI_Idx) = get_ts();
        }


	

}