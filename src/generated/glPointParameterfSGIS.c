#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfSGIS_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPointParameterfSGIS_Idx))


GLAPI void  APIENTRY glPointParameterfSGIS(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterfSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfSGIS_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfSGIS_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterfSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfSGIS_Idx) = get_ts();
        }


	

}