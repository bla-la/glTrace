#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexBufferEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum internalformat,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glMultiTexBufferEXT_Idx))


GLAPI void  APIENTRY glMultiTexBufferEXT(GLenum texunit,GLenum target,GLenum internalformat,GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexBufferEXT_wrp(texunit,target,internalformat,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexBufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexBufferEXT_Idx) = get_ts();
        }


	

}