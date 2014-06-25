#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathLengthNV_wrp						\
    ((GLfloat  (*)(GLuint path,GLsizei startSegment,GLsizei numSegments                                        \
    ))GL_ENTRY_PTR(glGetPathLengthNV_Idx))


GLAPI GLfloat  APIENTRY glGetPathLengthNV(GLuint path,GLsizei startSegment,GLsizei numSegments)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathLengthNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathLengthNV_Idx) = dlsym(RTLD_NEXT,"glGetPathLengthNV");
            if(!GL_ENTRY_PTR(glGetPathLengthNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathLengthNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathLengthNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLfloat  retval = glGetPathLengthNV_wrp(path,startSegment,numSegments);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathLengthNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathLengthNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathLengthNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathLengthNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathLengthNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathLengthNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathLengthNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathLengthNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathLengthNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathLengthNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathLengthNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathLengthNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathLengthNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathLengthNV_Idx) = get_ts();
        }


	return retval;

}