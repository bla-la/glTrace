#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexImage2DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTexImage2DEXT_Idx))


GLAPI void  APIENTRY glCopyTexImage2DEXT(GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTexImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexImage2DEXT_wrp(target,level,internalformat,x,y,width,height,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexImage2DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTexImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexImage2DEXT_Idx) = get_ts();
        }


	

}