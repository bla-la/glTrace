#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexImage1D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTexImage1D_Idx))


GLAPI void  APIENTRY glCopyTexImage1D(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTexImage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexImage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexImage1D_wrp(target,level,internalformat,x,y,width,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexImage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexImage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexImage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexImage1D_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexImage1D_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTexImage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexImage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexImage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexImage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexImage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexImage1D_Idx) = get_ts();
        }


	

}