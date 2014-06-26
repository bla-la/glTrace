#include <glTraceCommon.h>
#include <generated.h>

#define glEnableClientStateiEXT_wrp						\
    ((void  (*)(GLenum array,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableClientStateiEXT_Idx))


GLAPI void  APIENTRY glEnableClientStateiEXT(GLenum array,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableClientStateiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableClientStateiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableClientStateiEXT_wrp(array,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableClientStateiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableClientStateiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableClientStateiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableClientStateiEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableClientStateiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEnableClientStateiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableClientStateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientStateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientStateiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableClientStateiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableClientStateiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableClientStateiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableClientStateiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableClientStateiEXT_Idx) = get_ts();
        }


	

}