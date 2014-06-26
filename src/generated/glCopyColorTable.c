#include <glTraceCommon.h>
#include <generated.h>

#define glCopyColorTable_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyColorTable_Idx))


GLAPI void  APIENTRY glCopyColorTable(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyColorTable_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyColorTable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyColorTable_wrp(target,internalformat,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyColorTable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyColorTable_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyColorTable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyColorTable_Idx),
				 GL_ENTRY_LAST_TS(glCopyColorTable_Idx));


        if(last_diff > 1000000000){
            printf("glCopyColorTable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorTable_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorTable_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyColorTable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyColorTable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyColorTable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyColorTable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyColorTable_Idx) = get_ts();
        }


	

}