#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3fv_wrp						\
    ((void  (*)(GLenum target,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3fv_Idx))


GLAPI void  APIENTRY glMultiTexCoord3fv(GLenum target,const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3fv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3fv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3fv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3fv_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord3fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3fv_Idx) = get_ts();
        }


	

}