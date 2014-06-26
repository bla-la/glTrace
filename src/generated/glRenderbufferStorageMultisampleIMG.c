#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisampleIMG_wrp						\
    ((void  (*)(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisampleIMG_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisampleIMG(GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleIMG_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleIMG_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisampleIMG_wrp(target,samples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleIMG_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleIMG_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleIMG_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleIMG_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleIMG_Idx));


        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisampleIMG %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleIMG_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleIMG_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleIMG_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleIMG_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleIMG_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleIMG_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleIMG_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleIMG_Idx) = get_ts();
        }


	

}