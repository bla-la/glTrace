#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransformParameterfEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPixelTransformParameterfEXT_Idx))


GLAPI void  APIENTRY glPixelTransformParameterfEXT(GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTransformParameterfEXT_Idx))
	{
            GL_ENTRY_PTR(glPixelTransformParameterfEXT_Idx) = dlsym(RTLD_NEXT,"glPixelTransformParameterfEXT");
            if(!GL_ENTRY_PTR(glPixelTransformParameterfEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTransformParameterfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransformParameterfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransformParameterfEXT_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransformParameterfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransformParameterfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransformParameterfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransformParameterfEXT_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransformParameterfEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTransformParameterfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransformParameterfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransformParameterfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransformParameterfEXT_Idx) = get_ts();
        }


	

}