#include <glTraceCommon.h>
#include <generated.h>

#define glDrawMeshArraysSUN_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei width                                        \
    ))GL_ENTRY_PTR(glDrawMeshArraysSUN_Idx))


GLAPI void  APIENTRY glDrawMeshArraysSUN(GLenum mode,GLint first,GLsizei count,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawMeshArraysSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawMeshArraysSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawMeshArraysSUN_wrp(mode,first,count,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawMeshArraysSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawMeshArraysSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawMeshArraysSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawMeshArraysSUN_Idx),
				 GL_ENTRY_LAST_TS(glDrawMeshArraysSUN_Idx));


        if(last_diff > 1000000000){
            printf("glDrawMeshArraysSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawMeshArraysSUN_Idx),
	             GL_ENTRY_CALL_TIME(glDrawMeshArraysSUN_Idx),
	             GL_ENTRY_CALL_TIME(glDrawMeshArraysSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawMeshArraysSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawMeshArraysSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawMeshArraysSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawMeshArraysSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawMeshArraysSUN_Idx) = get_ts();
        }


	

}