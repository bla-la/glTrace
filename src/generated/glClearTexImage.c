#include <glTraceCommon.h>
#include <generated.h>

#define glClearTexImage_wrp						\
    ((void  (*)(GLuint texture,GLint level,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearTexImage_Idx))


GLAPI void  APIENTRY glClearTexImage(GLuint texture,GLint level,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearTexImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearTexImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearTexImage_wrp(texture,level,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearTexImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearTexImage_Idx) ++;

        GL_ENTRY_LAST_TS(glClearTexImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearTexImage_Idx),
				 GL_ENTRY_LAST_TS(glClearTexImage_Idx));


        if(last_diff > 1000000000){
            printf("glClearTexImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glClearTexImage_Idx),
	             GL_ENTRY_CALL_TIME(glClearTexImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearTexImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearTexImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearTexImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearTexImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearTexImage_Idx) = get_ts();
        }


	

}