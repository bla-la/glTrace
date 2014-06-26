#include <glTraceCommon.h>
#include <generated.h>

#define glEnableClientStateIndexedEXT_wrp						\
    ((void  (*)(GLenum array,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableClientStateIndexedEXT_Idx))


GLAPI void  APIENTRY glEnableClientStateIndexedEXT(GLenum array,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableClientStateIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableClientStateIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableClientStateIndexedEXT_wrp(array,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableClientStateIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableClientStateIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableClientStateIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableClientStateIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableClientStateIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEnableClientStateIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableClientStateIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientStateIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientStateIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableClientStateIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableClientStateIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableClientStateIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableClientStateIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableClientStateIndexedEXT_Idx) = get_ts();
        }


	

}