#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixScaledEXT_wrp						\
    ((void  (*)(GLenum mode,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glMatrixScaledEXT_Idx))


GLAPI void  APIENTRY glMatrixScaledEXT(GLenum mode,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixScaledEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixScaledEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixScaledEXT_wrp(mode,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixScaledEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixScaledEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixScaledEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixScaledEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixScaledEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixScaledEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixScaledEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixScaledEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixScaledEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixScaledEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixScaledEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixScaledEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixScaledEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixScaledEXT_Idx) = get_ts();
        }


	

}