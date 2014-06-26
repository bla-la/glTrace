#include <glTraceCommon.h>
#include <generated.h>

#define glPathDashArrayNV_wrp						\
    ((void  (*)(GLuint path,GLsizei dashCount,const GLfloat *dashArray                                        \
    ))GL_ENTRY_PTR(glPathDashArrayNV_Idx))


GLAPI void  APIENTRY glPathDashArrayNV(GLuint path,GLsizei dashCount,const GLfloat *dashArray)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPathDashArrayNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathDashArrayNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathDashArrayNV_wrp(path,dashCount,dashArray);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathDashArrayNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathDashArrayNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathDashArrayNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathDashArrayNV_Idx),
				 GL_ENTRY_LAST_TS(glPathDashArrayNV_Idx));


        if(last_diff > 1000000000){
            printf("glPathDashArrayNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathDashArrayNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathDashArrayNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathDashArrayNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathDashArrayNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathDashArrayNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathDashArrayNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathDashArrayNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathDashArrayNV_Idx) = get_ts();
        }


	

}