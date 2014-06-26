#include <glTraceCommon.h>
#include <generated.h>

#define glGetMaterialxv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetMaterialxv_Idx))


GLAPI void  APIENTRY glGetMaterialxv(GLenum face,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMaterialxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMaterialxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMaterialxv_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMaterialxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMaterialxv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMaterialxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMaterialxv_Idx),
				 GL_ENTRY_LAST_TS(glGetMaterialxv_Idx));


        if(last_diff > 1000000000){
            printf("glGetMaterialxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMaterialxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMaterialxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMaterialxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMaterialxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMaterialxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMaterialxv_Idx) = get_ts();
        }


	

}