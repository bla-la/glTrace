#include <glTraceCommon.h>
#include <generated.h>

#define glCallList_wrp						\
    ((void  (*)(GLuint list                                        \
    ))GL_ENTRY_PTR(glCallList_Idx))


GLAPI void  APIENTRY glCallList(GLuint list)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCallList_Idx))
    	{
            GL_ENTRY_PREV_TS(glCallList_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCallList_wrp(list);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCallList_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCallList_Idx) ++;

        GL_ENTRY_LAST_TS(glCallList_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCallList_Idx),
				 GL_ENTRY_LAST_TS(glCallList_Idx));


        if(last_diff > 1000000000){
            printf("glCallList %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCallList_Idx),
	             GL_ENTRY_CALL_TIME(glCallList_Idx),
	             GL_ENTRY_CALL_TIME(glCallList_Idx) /
	             GL_ENTRY_CALL_COUNT(glCallList_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCallList_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCallList_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCallList_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCallList_Idx) = get_ts();
        }


	

}