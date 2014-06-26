#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialxv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLfixed *param                                        \
    ))GL_ENTRY_PTR(glMaterialxv_Idx))


GLAPI void  APIENTRY glMaterialxv(GLenum face,GLenum pname,const GLfixed *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMaterialxv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialxv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialxv_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialxv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialxv_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialxv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialxv_Idx),
				 GL_ENTRY_LAST_TS(glMaterialxv_Idx));


        if(last_diff > 1000000000){
            printf("glMaterialxv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialxv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialxv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialxv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialxv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialxv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialxv_Idx) = get_ts();
        }


	

}