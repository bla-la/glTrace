#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage1D_wrp						\
    ((void  (*)(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width                                        \
    ))GL_ENTRY_PTR(glTexStorage1D_Idx))


GLAPI void  APIENTRY glTexStorage1D(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexStorage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage1D_wrp(target,levels,internalformat,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage1D_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage1D_Idx));


        if(last_diff > 1000000000){
            printf("glTexStorage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage1D_Idx) = get_ts();
        }


	

}