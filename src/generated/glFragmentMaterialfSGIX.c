#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentMaterialfSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glFragmentMaterialfSGIX_Idx))


GLAPI void  APIENTRY glFragmentMaterialfSGIX(GLenum face,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentMaterialfSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentMaterialfSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentMaterialfSGIX_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentMaterialfSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentMaterialfSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentMaterialfSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentMaterialfSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentMaterialfSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentMaterialfSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialfSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialfSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentMaterialfSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentMaterialfSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentMaterialfSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentMaterialfSGIX_Idx) = get_ts();
        }


	

}