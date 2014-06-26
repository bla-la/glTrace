#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentMaterialfvSGIX_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glFragmentMaterialfvSGIX_Idx))


GLAPI void  APIENTRY glFragmentMaterialfvSGIX(GLenum face,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentMaterialfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentMaterialfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentMaterialfvSGIX_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentMaterialfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentMaterialfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentMaterialfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentMaterialfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentMaterialfvSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentMaterialfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentMaterialfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentMaterialfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentMaterialfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentMaterialfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentMaterialfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentMaterialfvSGIX_Idx) = get_ts();
        }


	

}