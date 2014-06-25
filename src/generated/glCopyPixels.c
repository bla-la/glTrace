#include <glTraceCommon.h>
#include <generated.h>

#define glCopyPixels_wrp						\
    ((void  (*)(GLint x,GLint y,GLsizei width,GLsizei height,GLenum type                                        \
    ))GL_ENTRY_PTR(glCopyPixels_Idx))


GLAPI void  APIENTRY glCopyPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum type)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyPixels_Idx))
	{
            GL_ENTRY_PTR(glCopyPixels_Idx) = dlsym(RTLD_NEXT,"glCopyPixels");
            if(!GL_ENTRY_PTR(glCopyPixels_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyPixels_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyPixels_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyPixels_wrp(x,y,width,height,type);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyPixels_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyPixels_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyPixels_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyPixels_Idx),
				 GL_ENTRY_LAST_TS(glCopyPixels_Idx));
        if(last_diff > 1000000000){
            printf("glCopyPixels %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyPixels_Idx),
	             GL_ENTRY_CALL_TIME(glCopyPixels_Idx),
	             GL_ENTRY_CALL_TIME(glCopyPixels_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyPixels_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyPixels_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyPixels_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyPixels_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyPixels_Idx) = get_ts();
        }


	

}