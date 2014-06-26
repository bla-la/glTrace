#include <glTraceCommon.h>
#include <generated.h>

#define glNormalPointer_wrp						\
    ((void  (*)(GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glNormalPointer_Idx))


GLAPI void  APIENTRY glNormalPointer(GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNormalPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalPointer_wrp(type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalPointer_Idx),
				 GL_ENTRY_LAST_TS(glNormalPointer_Idx));


        if(last_diff > 1000000000){
            printf("glNormalPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalPointer_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointer_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalPointer_Idx) = get_ts();
        }


	

}