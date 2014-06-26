#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableEXT_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *data                                        \
    ))GL_ENTRY_PTR(glGetColorTableEXT_Idx))


GLAPI void  APIENTRY glGetColorTableEXT(GLenum target,GLenum format,GLenum type,void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetColorTableEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableEXT_wrp(target,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetColorTableEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableEXT_Idx) = get_ts();
        }


	

}