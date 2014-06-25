#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage2DEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glTexStorage2DEXT_Idx))


GLAPI void  APIENTRY glTexStorage2DEXT(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexStorage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glTexStorage2DEXT_Idx) = dlsym(RTLD_NEXT,"glTexStorage2DEXT");
            if(!GL_ENTRY_PTR(glTexStorage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexStorage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage2DEXT_wrp(target,levels,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTexStorage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage2DEXT_Idx) = get_ts();
        }


	

}