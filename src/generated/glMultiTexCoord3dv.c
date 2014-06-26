#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3dv_wrp						\
    ((void  (*)(GLenum target,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3dv_Idx))


GLAPI void  APIENTRY glMultiTexCoord3dv(GLenum target,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3dv_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3dv_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3dv_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3dv_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord3dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3dv_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3dv_Idx) = get_ts();
        }


	

}