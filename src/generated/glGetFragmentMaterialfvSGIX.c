#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragmentMaterialfvSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetFragmentMaterialfvSGIX_Idx))


GLAPI void  APIENTRY glGetFragmentMaterialfvSGIX(GLenum face,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFragmentMaterialfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragmentMaterialfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFragmentMaterialfvSGIX_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragmentMaterialfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragmentMaterialfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragmentMaterialfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragmentMaterialfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetFragmentMaterialfvSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glGetFragmentMaterialfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentMaterialfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentMaterialfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragmentMaterialfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragmentMaterialfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragmentMaterialfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragmentMaterialfvSGIX_Idx) = get_ts();
        }


	

}