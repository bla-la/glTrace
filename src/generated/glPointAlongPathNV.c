#include <glTraceCommon.h>
#include <generated.h>

#define glPointAlongPathNV_wrp						\
    ((GLboolean  (*)(GLuint path,GLsizei startSegment,GLsizei numSegments,GLfloat distance,GLfloat *x,GLfloat *y,GLfloat *tangentX,GLfloat *tangentY                                        \
    ))GL_ENTRY_PTR(glPointAlongPathNV_Idx))


GLAPI GLboolean  APIENTRY glPointAlongPathNV(GLuint path,GLsizei startSegment,GLsizei numSegments,GLfloat distance,GLfloat *x,GLfloat *y,GLfloat *tangentX,GLfloat *tangentY)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointAlongPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointAlongPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glPointAlongPathNV_wrp(path,startSegment,numSegments,distance,x,y,tangentX,tangentY);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointAlongPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointAlongPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPointAlongPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointAlongPathNV_Idx),
				 GL_ENTRY_LAST_TS(glPointAlongPathNV_Idx));


        if(last_diff > 1000000000){
            printf("glPointAlongPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointAlongPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointAlongPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointAlongPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointAlongPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointAlongPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointAlongPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointAlongPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointAlongPathNV_Idx) = get_ts();
        }


	return retval;

}