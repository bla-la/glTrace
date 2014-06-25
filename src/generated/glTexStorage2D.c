#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage2D_wrp						\
    ((void  (*)(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glTexStorage2D_Idx))


GLAPI void  APIENTRY glTexStorage2D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexStorage2D_Idx))
	{
            GL_ENTRY_PTR(glTexStorage2D_Idx) = dlsym(RTLD_NEXT,"glTexStorage2D");
            if(!GL_ENTRY_PTR(glTexStorage2D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexStorage2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage2D_wrp(target,levels,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage2D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage2D_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage2D_Idx));
        if(last_diff > 1000000000){
            printf("glTexStorage2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage2D_Idx) = get_ts();
        }


	

}