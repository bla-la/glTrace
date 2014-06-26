#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixRotatedEXT_wrp						\
    ((void  (*)(GLenum mode,GLdouble angle,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glMatrixRotatedEXT_Idx))


GLAPI void  APIENTRY glMatrixRotatedEXT(GLenum mode,GLdouble angle,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixRotatedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixRotatedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixRotatedEXT_wrp(mode,angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixRotatedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixRotatedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixRotatedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixRotatedEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixRotatedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixRotatedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixRotatedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixRotatedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixRotatedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixRotatedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixRotatedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixRotatedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixRotatedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixRotatedEXT_Idx) = get_ts();
        }


	

}