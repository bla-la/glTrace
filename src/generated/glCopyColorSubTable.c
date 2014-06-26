#include <glTraceCommon.h>
#include <generated.h>

#define glCopyColorSubTable_wrp						\
    ((void  (*)(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyColorSubTable_Idx))


GLAPI void  APIENTRY glCopyColorSubTable(GLenum target,GLsizei start,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyColorSubTable_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyColorSubTable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyColorSubTable_wrp(target,start,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyColorSubTable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyColorSubTable_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyColorSubTable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyColorSubTable_Idx),
				 GL_ENTRY_LAST_TS(glCopyColorSubTable_Idx));


        if(last_diff > 1000000000){
            printf("glCopyColorSubTable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyColorSubTable_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorSubTable_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorSubTable_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyColorSubTable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyColorSubTable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyColorSubTable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyColorSubTable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyColorSubTable_Idx) = get_ts();
        }


	

}