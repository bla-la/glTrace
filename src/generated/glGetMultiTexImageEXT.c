#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexImageEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLenum format,GLenum type,void *pixels                                        \
    ))GL_ENTRY_PTR(glGetMultiTexImageEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexImageEXT(GLenum texunit,GLenum target,GLint level,GLenum format,GLenum type,void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexImageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexImageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexImageEXT_wrp(texunit,target,level,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexImageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexImageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexImageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexImageEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexImageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexImageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexImageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexImageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexImageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexImageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexImageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexImageEXT_Idx) = get_ts();
        }


	

}