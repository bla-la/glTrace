#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord1f_wrp						\
    ((void  (*)(GLenum target,GLfloat s                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord1f_Idx))


GLAPI void  APIENTRY glMultiTexCoord1f(GLenum target,GLfloat s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord1f_wrp(target,s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord1f_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord1f_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord1f_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord1f_Idx) = get_ts();
        }


	

}