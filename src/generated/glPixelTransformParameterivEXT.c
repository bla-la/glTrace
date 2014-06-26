#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransformParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glPixelTransformParameterivEXT_Idx))


GLAPI void  APIENTRY glPixelTransformParameterivEXT(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelTransformParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransformParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransformParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransformParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransformParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransformParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransformParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransformParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPixelTransformParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransformParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransformParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransformParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransformParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransformParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransformParameterivEXT_Idx) = get_ts();
        }


	

}