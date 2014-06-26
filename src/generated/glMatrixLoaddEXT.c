#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixLoaddEXT_wrp						\
    ((void  (*)(GLenum mode,const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMatrixLoaddEXT_Idx))


GLAPI void  APIENTRY glMatrixLoaddEXT(GLenum mode,const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixLoaddEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixLoaddEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixLoaddEXT_wrp(mode,m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixLoaddEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixLoaddEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixLoaddEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixLoaddEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixLoaddEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixLoaddEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixLoaddEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoaddEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoaddEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixLoaddEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixLoaddEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixLoaddEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixLoaddEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixLoaddEXT_Idx) = get_ts();
        }


	

}