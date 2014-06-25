#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentMaterialivSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glFragmentMaterialivSGIX_Idx))


GLAPI void  APIENTRY glFragmentMaterialivSGIX(GLenum face,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFragmentMaterialivSGIX_Idx))
	{
            GL_ENTRY_PTR(glFragmentMaterialivSGIX_Idx) = dlsym(RTLD_NEXT,"glFragmentMaterialivSGIX");
            if(!GL_ENTRY_PTR(glFragmentMaterialivSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFragmentMaterialivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentMaterialivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentMaterialivSGIX_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentMaterialivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentMaterialivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentMaterialivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentMaterialivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentMaterialivSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glFragmentMaterialivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentMaterialivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentMaterialivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentMaterialivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentMaterialivSGIX_Idx) = get_ts();
        }


	

}