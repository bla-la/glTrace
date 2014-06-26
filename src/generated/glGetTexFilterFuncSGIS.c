#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexFilterFuncSGIS_wrp						\
    ((void  (*)(GLenum target,GLenum filter,GLfloat *weights                                        \
    ))GL_ENTRY_PTR(glGetTexFilterFuncSGIS_Idx))


GLAPI void  APIENTRY glGetTexFilterFuncSGIS(GLenum target,GLenum filter,GLfloat *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexFilterFuncSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexFilterFuncSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexFilterFuncSGIS_wrp(target,filter,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexFilterFuncSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexFilterFuncSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexFilterFuncSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexFilterFuncSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetTexFilterFuncSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexFilterFuncSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexFilterFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexFilterFuncSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexFilterFuncSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexFilterFuncSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexFilterFuncSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexFilterFuncSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexFilterFuncSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexFilterFuncSGIS_Idx) = get_ts();
        }


	

}