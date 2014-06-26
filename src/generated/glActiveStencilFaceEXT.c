#include <glTraceCommon.h>
#include <generated.h>

#define glActiveStencilFaceEXT_wrp						\
    ((void  (*)(GLenum face                                        \
    ))GL_ENTRY_PTR(glActiveStencilFaceEXT_Idx))


GLAPI void  APIENTRY glActiveStencilFaceEXT(GLenum face)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glActiveStencilFaceEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveStencilFaceEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveStencilFaceEXT_wrp(face);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveStencilFaceEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveStencilFaceEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveStencilFaceEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveStencilFaceEXT_Idx),
				 GL_ENTRY_LAST_TS(glActiveStencilFaceEXT_Idx));


        if(last_diff > 1000000000){
            printf("glActiveStencilFaceEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveStencilFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveStencilFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveStencilFaceEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveStencilFaceEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveStencilFaceEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveStencilFaceEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveStencilFaceEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveStencilFaceEXT_Idx) = get_ts();
        }


	

}