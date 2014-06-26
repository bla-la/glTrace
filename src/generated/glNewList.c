#include <glTraceCommon.h>
#include <generated.h>

#define glNewList_wrp						\
    ((void  (*)(GLuint list,GLenum mode                                        \
    ))GL_ENTRY_PTR(glNewList_Idx))


GLAPI void  APIENTRY glNewList(GLuint list,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNewList_Idx))
    	{
            GL_ENTRY_PREV_TS(glNewList_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNewList_wrp(list,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNewList_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNewList_Idx) ++;

        GL_ENTRY_LAST_TS(glNewList_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNewList_Idx),
				 GL_ENTRY_LAST_TS(glNewList_Idx));


        if(last_diff > 1000000000){
            printf("glNewList %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNewList_Idx),
	             GL_ENTRY_CALL_TIME(glNewList_Idx),
	             GL_ENTRY_CALL_TIME(glNewList_Idx) /
	             GL_ENTRY_CALL_COUNT(glNewList_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNewList_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNewList_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNewList_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNewList_Idx) = get_ts();
        }


	

}