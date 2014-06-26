#include <glTraceCommon.h>
#include <generated.h>

#define glStencilStrokePathNV_wrp						\
    ((void  (*)(GLuint path,GLint reference,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilStrokePathNV_Idx))


GLAPI void  APIENTRY glStencilStrokePathNV(GLuint path,GLint reference,GLuint mask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilStrokePathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilStrokePathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilStrokePathNV_wrp(path,reference,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilStrokePathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilStrokePathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilStrokePathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilStrokePathNV_Idx),
				 GL_ENTRY_LAST_TS(glStencilStrokePathNV_Idx));


        if(last_diff > 1000000000){
            printf("glStencilStrokePathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilStrokePathNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilStrokePathNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilStrokePathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilStrokePathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilStrokePathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilStrokePathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilStrokePathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilStrokePathNV_Idx) = get_ts();
        }


	

}