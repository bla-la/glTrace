#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage3D_wrp						\
    ((void  (*)(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth                                        \
    ))GL_ENTRY_PTR(glTexStorage3D_Idx))


GLAPI void  APIENTRY glTexStorage3D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexStorage3D_Idx))
	{
            GL_ENTRY_PTR(glTexStorage3D_Idx) = dlsym(RTLD_NEXT,"glTexStorage3D");
            if(!GL_ENTRY_PTR(glTexStorage3D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexStorage3D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage3D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage3D_wrp(target,levels,internalformat,width,height,depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage3D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage3D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage3D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage3D_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage3D_Idx));
        if(last_diff > 1000000000){
            printf("glTexStorage3D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage3D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage3D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage3D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage3D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage3D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage3D_Idx) = get_ts();
        }


	

}