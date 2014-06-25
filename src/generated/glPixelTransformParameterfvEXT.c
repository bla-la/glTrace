#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransformParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPixelTransformParameterfvEXT_Idx))


GLAPI void  APIENTRY glPixelTransformParameterfvEXT(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTransformParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glPixelTransformParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glPixelTransformParameterfvEXT");
            if(!GL_ENTRY_PTR(glPixelTransformParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTransformParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransformParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransformParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransformParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransformParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransformParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransformParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransformParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTransformParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransformParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransformParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransformParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransformParameterfvEXT_Idx) = get_ts();
        }


	

}