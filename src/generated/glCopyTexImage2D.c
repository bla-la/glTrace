#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexImage2D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTexImage2D_Idx))


GLAPI void  APIENTRY glCopyTexImage2D(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTexImage2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexImage2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexImage2D_wrp(target,level,internalformat,x,y,width,height,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexImage2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexImage2D_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexImage2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexImage2D_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexImage2D_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTexImage2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexImage2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexImage2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexImage2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexImage2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexImage2D_Idx) = get_ts();
        }


	

}