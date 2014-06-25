#include <glTraceCommon.h>
#include <generated.h>

#define glCopyMultiTexImage2DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyMultiTexImage2DEXT_Idx))


GLAPI void  APIENTRY glCopyMultiTexImage2DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyMultiTexImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyMultiTexImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyMultiTexImage2DEXT");
            if(!GL_ENTRY_PTR(glCopyMultiTexImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyMultiTexImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyMultiTexImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyMultiTexImage2DEXT_wrp(texunit,target,level,internalformat,x,y,width,height,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyMultiTexImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyMultiTexImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyMultiTexImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyMultiTexImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyMultiTexImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyMultiTexImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyMultiTexImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyMultiTexImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyMultiTexImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyMultiTexImage2DEXT_Idx) = get_ts();
        }


	

}