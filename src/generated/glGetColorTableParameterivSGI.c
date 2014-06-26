#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableParameterivSGI_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetColorTableParameterivSGI_Idx))


GLAPI void  APIENTRY glGetColorTableParameterivSGI(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetColorTableParameterivSGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableParameterivSGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableParameterivSGI_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableParameterivSGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableParameterivSGI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableParameterivSGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableParameterivSGI_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableParameterivSGI_Idx));


        if(last_diff > 1000000000){
            printf("glGetColorTableParameterivSGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterivSGI_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterivSGI_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameterivSGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameterivSGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableParameterivSGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableParameterivSGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableParameterivSGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableParameterivSGI_Idx) = get_ts();
        }


	

}