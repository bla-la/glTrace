#include <glTraceCommon.h>
#include <generated.h>

#define glPatchParameterfv_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *values                                        \
    ))GL_ENTRY_PTR(glPatchParameterfv_Idx))


GLAPI void  APIENTRY glPatchParameterfv(GLenum pname,const GLfloat *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPatchParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPatchParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPatchParameterfv_wrp(pname,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPatchParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPatchParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glPatchParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPatchParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glPatchParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glPatchParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPatchParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPatchParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPatchParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPatchParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPatchParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPatchParameterfv_Idx) = get_ts();
        }


	

}