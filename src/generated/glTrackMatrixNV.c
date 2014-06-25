#include <glTraceCommon.h>
#include <generated.h>

#define glTrackMatrixNV_wrp						\
    ((void  (*)(GLenum target,GLuint address,GLenum matrix,GLenum transform                                        \
    ))GL_ENTRY_PTR(glTrackMatrixNV_Idx))


GLAPI void  APIENTRY glTrackMatrixNV(GLenum target,GLuint address,GLenum matrix,GLenum transform)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTrackMatrixNV_Idx))
	{
            GL_ENTRY_PTR(glTrackMatrixNV_Idx) = dlsym(RTLD_NEXT,"glTrackMatrixNV");
            if(!GL_ENTRY_PTR(glTrackMatrixNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTrackMatrixNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTrackMatrixNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTrackMatrixNV_wrp(target,address,matrix,transform);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTrackMatrixNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTrackMatrixNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTrackMatrixNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTrackMatrixNV_Idx),
				 GL_ENTRY_LAST_TS(glTrackMatrixNV_Idx));
        if(last_diff > 1000000000){
            printf("glTrackMatrixNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTrackMatrixNV_Idx),
	             GL_ENTRY_CALL_TIME(glTrackMatrixNV_Idx),
	             GL_ENTRY_CALL_TIME(glTrackMatrixNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTrackMatrixNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTrackMatrixNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTrackMatrixNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTrackMatrixNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTrackMatrixNV_Idx) = get_ts();
        }


	

}