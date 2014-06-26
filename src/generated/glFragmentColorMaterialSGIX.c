#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentColorMaterialSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum mode                                        \
    ))GL_ENTRY_PTR(glFragmentColorMaterialSGIX_Idx))


GLAPI void  APIENTRY glFragmentColorMaterialSGIX(GLenum face,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentColorMaterialSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentColorMaterialSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentColorMaterialSGIX_wrp(face,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentColorMaterialSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentColorMaterialSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentColorMaterialSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentColorMaterialSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentColorMaterialSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentColorMaterialSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentColorMaterialSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentColorMaterialSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentColorMaterialSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentColorMaterialSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentColorMaterialSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentColorMaterialSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentColorMaterialSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentColorMaterialSGIX_Idx) = get_ts();
        }


	

}