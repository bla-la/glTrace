#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathCoordsNV_wrp						\
    ((void  (*)(GLuint path,GLfloat *coords                                        \
    ))GL_ENTRY_PTR(glGetPathCoordsNV_Idx))


GLAPI void  APIENTRY glGetPathCoordsNV(GLuint path,GLfloat *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathCoordsNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathCoordsNV_Idx) = dlsym(RTLD_NEXT,"glGetPathCoordsNV");
            if(!GL_ENTRY_PTR(glGetPathCoordsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathCoordsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathCoordsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathCoordsNV_wrp(path,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathCoordsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathCoordsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathCoordsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathCoordsNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathCoordsNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathCoordsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathCoordsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathCoordsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathCoordsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathCoordsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathCoordsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathCoordsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathCoordsNV_Idx) = get_ts();
        }


	

}