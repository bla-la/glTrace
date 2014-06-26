#include <glTraceCommon.h>
#include <generated.h>

#define glCallLists_wrp						\
    ((void  (*)(GLsizei n,GLenum type,const void *lists                                        \
    ))GL_ENTRY_PTR(glCallLists_Idx))


GLAPI void  APIENTRY glCallLists(GLsizei n,GLenum type,const void *lists)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCallLists_Idx))
    	{
            GL_ENTRY_PREV_TS(glCallLists_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCallLists_wrp(n,type,lists);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCallLists_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCallLists_Idx) ++;

        GL_ENTRY_LAST_TS(glCallLists_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCallLists_Idx),
				 GL_ENTRY_LAST_TS(glCallLists_Idx));


        if(last_diff > 1000000000){
            printf("glCallLists %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCallLists_Idx),
	             GL_ENTRY_CALL_TIME(glCallLists_Idx),
	             GL_ENTRY_CALL_TIME(glCallLists_Idx) /
	             GL_ENTRY_CALL_COUNT(glCallLists_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCallLists_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCallLists_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCallLists_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCallLists_Idx) = get_ts();
        }


	

}