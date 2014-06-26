#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorage3DEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth                                        \
    ))GL_ENTRY_PTR(glTexStorage3DEXT_Idx))


GLAPI void  APIENTRY glTexStorage3DEXT(GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexStorage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorage3DEXT_wrp(target,levels,internalformat,width,height,depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexStorage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTexStorage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorage3DEXT_Idx) = get_ts();
        }


	

}