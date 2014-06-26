#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferfi_wrp						\
    ((void  (*)(GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil                                        \
    ))GL_ENTRY_PTR(glClearBufferfi_Idx))


GLAPI void  APIENTRY glClearBufferfi(GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearBufferfi_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferfi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferfi_wrp(buffer,drawbuffer,depth,stencil);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferfi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferfi_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferfi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferfi_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferfi_Idx));


        if(last_diff > 1000000000){
            printf("glClearBufferfi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferfi_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferfi_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferfi_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferfi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferfi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferfi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferfi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferfi_Idx) = get_ts();
        }


	

}