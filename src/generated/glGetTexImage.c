#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexImage_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum format,GLenum type,void *pixels                                        \
    ))GL_ENTRY_PTR(glGetTexImage_Idx))


GLAPI void  APIENTRY glGetTexImage(GLenum target,GLint level,GLenum format,GLenum type,void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexImage_wrp(target,level,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexImage_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexImage_Idx),
				 GL_ENTRY_LAST_TS(glGetTexImage_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexImage_Idx) = get_ts();
        }


	

}