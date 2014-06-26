#include <glTraceCommon.h>
#include <generated.h>

#define glGetMaterialxOES_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glGetMaterialxOES_Idx))


GLAPI void  APIENTRY glGetMaterialxOES(GLenum face,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMaterialxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMaterialxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMaterialxOES_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMaterialxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMaterialxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMaterialxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMaterialxOES_Idx),
				 GL_ENTRY_LAST_TS(glGetMaterialxOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetMaterialxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMaterialxOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMaterialxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMaterialxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMaterialxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMaterialxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMaterialxOES_Idx) = get_ts();
        }


	

}