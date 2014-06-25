#include <glTraceCommon.h>
#include <generated.h>

#define glPathCoordsNV_wrp						\
    ((void  (*)(GLuint path,GLsizei numCoords,GLenum coordType,const void *coords                                        \
    ))GL_ENTRY_PTR(glPathCoordsNV_Idx))


GLAPI void  APIENTRY glPathCoordsNV(GLuint path,GLsizei numCoords,GLenum coordType,const void *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathCoordsNV_Idx))
	{
            GL_ENTRY_PTR(glPathCoordsNV_Idx) = dlsym(RTLD_NEXT,"glPathCoordsNV");
            if(!GL_ENTRY_PTR(glPathCoordsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathCoordsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathCoordsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathCoordsNV_wrp(path,numCoords,coordType,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathCoordsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathCoordsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathCoordsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathCoordsNV_Idx),
				 GL_ENTRY_LAST_TS(glPathCoordsNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathCoordsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCoordsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathCoordsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathCoordsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathCoordsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathCoordsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathCoordsNV_Idx) = get_ts();
        }


	

}