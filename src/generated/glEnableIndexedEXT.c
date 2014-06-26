#include <glTraceCommon.h>
#include <generated.h>

#define glEnableIndexedEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableIndexedEXT_Idx))


GLAPI void  APIENTRY glEnableIndexedEXT(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableIndexedEXT_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEnableIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableIndexedEXT_Idx) = get_ts();
        }


	

}