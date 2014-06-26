#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixTranslatedEXT_wrp						\
    ((void  (*)(GLenum mode,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glMatrixTranslatedEXT_Idx))


GLAPI void  APIENTRY glMatrixTranslatedEXT(GLenum mode,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixTranslatedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixTranslatedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixTranslatedEXT_wrp(mode,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixTranslatedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixTranslatedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixTranslatedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixTranslatedEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixTranslatedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixTranslatedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixTranslatedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixTranslatedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixTranslatedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixTranslatedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixTranslatedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixTranslatedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixTranslatedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixTranslatedEXT_Idx) = get_ts();
        }


	

}