#include <glTraceCommon.h>
#include <generated.h>

#define glStencilFuncSeparate_wrp						\
    ((void  (*)(GLenum face,GLenum func,GLint ref,GLuint mask                                        \
    ))GL_ENTRY_PTR(glStencilFuncSeparate_Idx))


GLAPI void  APIENTRY glStencilFuncSeparate(GLenum face,GLenum func,GLint ref,GLuint mask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilFuncSeparate_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilFuncSeparate_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilFuncSeparate_wrp(face,func,ref,mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilFuncSeparate_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilFuncSeparate_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilFuncSeparate_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilFuncSeparate_Idx),
				 GL_ENTRY_LAST_TS(glStencilFuncSeparate_Idx));


        if(last_diff > 1000000000){
            printf("glStencilFuncSeparate %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilFuncSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFuncSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFuncSeparate_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilFuncSeparate_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilFuncSeparate_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilFuncSeparate_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilFuncSeparate_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilFuncSeparate_Idx) = get_ts();
        }


	

}