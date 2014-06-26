#include <glTraceCommon.h>
#include <generated.h>

#define glPassTexCoordATI_wrp						\
    ((void  (*)(GLuint dst,GLuint coord,GLenum swizzle                                        \
    ))GL_ENTRY_PTR(glPassTexCoordATI_Idx))


GLAPI void  APIENTRY glPassTexCoordATI(GLuint dst,GLuint coord,GLenum swizzle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPassTexCoordATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glPassTexCoordATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPassTexCoordATI_wrp(dst,coord,swizzle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPassTexCoordATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPassTexCoordATI_Idx) ++;

        GL_ENTRY_LAST_TS(glPassTexCoordATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPassTexCoordATI_Idx),
				 GL_ENTRY_LAST_TS(glPassTexCoordATI_Idx));


        if(last_diff > 1000000000){
            printf("glPassTexCoordATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPassTexCoordATI_Idx),
	             GL_ENTRY_CALL_TIME(glPassTexCoordATI_Idx),
	             GL_ENTRY_CALL_TIME(glPassTexCoordATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glPassTexCoordATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPassTexCoordATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPassTexCoordATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPassTexCoordATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPassTexCoordATI_Idx) = get_ts();
        }


	

}