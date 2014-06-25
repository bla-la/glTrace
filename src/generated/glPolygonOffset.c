#include <glTraceCommon.h>
#include <generated.h>

#define glPolygonOffset_wrp						\
    ((void  (*)(GLfloat factor,GLfloat units                                        \
    ))GL_ENTRY_PTR(glPolygonOffset_Idx))


GLAPI void  APIENTRY glPolygonOffset(GLfloat factor,GLfloat units)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPolygonOffset_Idx))
	{
            GL_ENTRY_PTR(glPolygonOffset_Idx) = dlsym(RTLD_NEXT,"glPolygonOffset");
            if(!GL_ENTRY_PTR(glPolygonOffset_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPolygonOffset_Idx))
    	{
            GL_ENTRY_PREV_TS(glPolygonOffset_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPolygonOffset_wrp(factor,units);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPolygonOffset_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPolygonOffset_Idx) ++;

        GL_ENTRY_LAST_TS(glPolygonOffset_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPolygonOffset_Idx),
				 GL_ENTRY_LAST_TS(glPolygonOffset_Idx));
        if(last_diff > 1000000000){
            printf("glPolygonOffset %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPolygonOffset_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffset_Idx),
	             GL_ENTRY_CALL_TIME(glPolygonOffset_Idx) /
	             GL_ENTRY_CALL_COUNT(glPolygonOffset_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPolygonOffset_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPolygonOffset_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPolygonOffset_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPolygonOffset_Idx) = get_ts();
        }


	

}