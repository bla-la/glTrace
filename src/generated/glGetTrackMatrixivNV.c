#include <glTraceCommon.h>
#include <generated.h>

#define glGetTrackMatrixivNV_wrp						\
    ((void  (*)(GLenum target,GLuint address,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTrackMatrixivNV_Idx))


GLAPI void  APIENTRY glGetTrackMatrixivNV(GLenum target,GLuint address,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTrackMatrixivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTrackMatrixivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTrackMatrixivNV_wrp(target,address,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTrackMatrixivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTrackMatrixivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTrackMatrixivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTrackMatrixivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetTrackMatrixivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetTrackMatrixivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTrackMatrixivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTrackMatrixivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTrackMatrixivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTrackMatrixivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTrackMatrixivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTrackMatrixivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTrackMatrixivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTrackMatrixivNV_Idx) = get_ts();
        }


	

}