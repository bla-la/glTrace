#include <glTraceCommon.h>
#include <generated.h>

#define glDisableClientStateIndexedEXT_wrp						\
    ((void  (*)(GLenum array,GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableClientStateIndexedEXT_Idx))


GLAPI void  APIENTRY glDisableClientStateIndexedEXT(GLenum array,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDisableClientStateIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableClientStateIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableClientStateIndexedEXT_wrp(array,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableClientStateIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableClientStateIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableClientStateIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableClientStateIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glDisableClientStateIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDisableClientStateIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableClientStateIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientStateIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientStateIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableClientStateIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableClientStateIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableClientStateIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableClientStateIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableClientStateIndexedEXT_Idx) = get_ts();
        }


	

}