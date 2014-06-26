#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4d_wrp						\
    ((void  (*)(GLenum target,GLdouble s,GLdouble t,GLdouble r,GLdouble q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4d_Idx))


GLAPI void  APIENTRY glMultiTexCoord4d(GLenum target,GLdouble s,GLdouble t,GLdouble r,GLdouble q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4d_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4d_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4d_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4d_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4d_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4d_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4d_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4d_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4d_Idx) = get_ts();
        }


	

}