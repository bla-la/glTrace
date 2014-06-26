#include <glTraceCommon.h>
#include <generated.h>

#define glCopyColorTableSGI_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyColorTableSGI_Idx))


GLAPI void  APIENTRY glCopyColorTableSGI(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyColorTableSGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyColorTableSGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyColorTableSGI_wrp(target,internalformat,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyColorTableSGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyColorTableSGI_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyColorTableSGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyColorTableSGI_Idx),
				 GL_ENTRY_LAST_TS(glCopyColorTableSGI_Idx));


        if(last_diff > 1000000000){
            printf("glCopyColorTableSGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorTableSGI_Idx),
	             GL_ENTRY_CALL_TIME(glCopyColorTableSGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyColorTableSGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyColorTableSGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyColorTableSGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyColorTableSGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyColorTableSGI_Idx) = get_ts();
        }


	

}