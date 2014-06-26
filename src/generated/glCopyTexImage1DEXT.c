#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexImage1DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTexImage1DEXT_Idx))


GLAPI void  APIENTRY glCopyTexImage1DEXT(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTexImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexImage1DEXT_wrp(target,level,internalformat,x,y,width,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexImage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTexImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexImage1DEXT_Idx) = get_ts();
        }


	

}