#include <glTraceCommon.h>
#include <generated.h>

#define glStencilFillPathNV_wrp						\
    ((void  (*)(GLuint path,GLenum fillMode,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilFillPathNV_Idx))


GLAPI void  APIENTRY glStencilFillPathNV(GLuint path,GLenum fillMode,GLuint mask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilFillPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilFillPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilFillPathNV_wrp(path,fillMode,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilFillPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilFillPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilFillPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilFillPathNV_Idx),
				 GL_ENTRY_LAST_TS(glStencilFillPathNV_Idx));


        if(last_diff > 1000000000){
            printf("glStencilFillPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFillPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFillPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilFillPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilFillPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilFillPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilFillPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilFillPathNV_Idx) = get_ts();
        }


	

}