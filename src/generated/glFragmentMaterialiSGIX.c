#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentMaterialiSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glFragmentMaterialiSGIX_Idx))


GLAPI void  APIENTRY glFragmentMaterialiSGIX(GLenum face,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFragmentMaterialiSGIX_Idx))
	{
            GL_ENTRY_PTR(glFragmentMaterialiSGIX_Idx) = dlsym(RTLD_NEXT,"glFragmentMaterialiSGIX");
            if(!GL_ENTRY_PTR(glFragmentMaterialiSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFragmentMaterialiSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentMaterialiSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentMaterialiSGIX_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentMaterialiSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentMaterialiSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentMaterialiSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentMaterialiSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentMaterialiSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glFragmentMaterialiSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialiSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialiSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialiSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialiSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentMaterialiSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentMaterialiSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentMaterialiSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentMaterialiSGIX_Idx) = get_ts();
        }


	

}