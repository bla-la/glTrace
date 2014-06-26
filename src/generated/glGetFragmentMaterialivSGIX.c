#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragmentMaterialivSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFragmentMaterialivSGIX_Idx))


GLAPI void  APIENTRY glGetFragmentMaterialivSGIX(GLenum face,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFragmentMaterialivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragmentMaterialivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFragmentMaterialivSGIX_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragmentMaterialivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragmentMaterialivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragmentMaterialivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragmentMaterialivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetFragmentMaterialivSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glGetFragmentMaterialivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentMaterialivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentMaterialivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragmentMaterialivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragmentMaterialivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragmentMaterialivSGIX_Idx) = get_ts();
        }


	

}