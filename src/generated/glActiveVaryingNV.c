#include <glTraceCommon.h>
#include <generated.h>

#define glActiveVaryingNV_wrp						\
    ((void  (*)(GLuint program,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glActiveVaryingNV_Idx))


GLAPI void  APIENTRY glActiveVaryingNV(GLuint program,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glActiveVaryingNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveVaryingNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveVaryingNV_wrp(program,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveVaryingNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveVaryingNV_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveVaryingNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveVaryingNV_Idx),
				 GL_ENTRY_LAST_TS(glActiveVaryingNV_Idx));


        if(last_diff > 1000000000){
            printf("glActiveVaryingNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glActiveVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glActiveVaryingNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveVaryingNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveVaryingNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveVaryingNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveVaryingNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveVaryingNV_Idx) = get_ts();
        }


	

}