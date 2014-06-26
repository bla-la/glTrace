#include <glTraceCommon.h>
#include <generated.h>

#define glGetBooleanv_wrp						\
    ((void  (*)(GLenum pname,GLboolean *data                                        \
    ))GL_ENTRY_PTR(glGetBooleanv_Idx))


GLAPI void  APIENTRY glGetBooleanv(GLenum pname,GLboolean *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetBooleanv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBooleanv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBooleanv_wrp(pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBooleanv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBooleanv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBooleanv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBooleanv_Idx),
				 GL_ENTRY_LAST_TS(glGetBooleanv_Idx));


        if(last_diff > 1000000000){
            printf("glGetBooleanv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBooleanv_Idx),
	             GL_ENTRY_CALL_TIME(glGetBooleanv_Idx),
	             GL_ENTRY_CALL_TIME(glGetBooleanv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBooleanv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBooleanv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBooleanv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBooleanv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBooleanv_Idx) = get_ts();
        }


	

}