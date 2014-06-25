#include <glTraceCommon.h>
#include <generated.h>

#define glPathSubCoordsNV_wrp						\
    ((void  (*)(GLuint path,GLsizei coordStart,GLsizei numCoords,GLenum coordType,const void *coords                                        \
    ))GL_ENTRY_PTR(glPathSubCoordsNV_Idx))


GLAPI void  APIENTRY glPathSubCoordsNV(GLuint path,GLsizei coordStart,GLsizei numCoords,GLenum coordType,const void *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathSubCoordsNV_Idx))
	{
            GL_ENTRY_PTR(glPathSubCoordsNV_Idx) = dlsym(RTLD_NEXT,"glPathSubCoordsNV");
            if(!GL_ENTRY_PTR(glPathSubCoordsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathSubCoordsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathSubCoordsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathSubCoordsNV_wrp(path,coordStart,numCoords,coordType,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathSubCoordsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathSubCoordsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathSubCoordsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathSubCoordsNV_Idx),
				 GL_ENTRY_LAST_TS(glPathSubCoordsNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathSubCoordsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathSubCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathSubCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathSubCoordsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathSubCoordsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathSubCoordsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathSubCoordsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathSubCoordsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathSubCoordsNV_Idx) = get_ts();
        }


	

}