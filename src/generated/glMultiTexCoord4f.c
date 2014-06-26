#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4f_wrp						\
    ((void  (*)(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4f_Idx))


GLAPI void  APIENTRY glMultiTexCoord4f(GLenum target,GLfloat s,GLfloat t,GLfloat r,GLfloat q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4f_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4f_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4f_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4f_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4f_Idx) = get_ts();
        }


	

}