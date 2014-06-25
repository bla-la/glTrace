#include <glTraceCommon.h>
#include <generated.h>

#define glColorTableParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glColorTableParameterfv_Idx))


GLAPI void  APIENTRY glColorTableParameterfv(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorTableParameterfv_Idx))
	{
            GL_ENTRY_PTR(glColorTableParameterfv_Idx) = dlsym(RTLD_NEXT,"glColorTableParameterfv");
            if(!GL_ENTRY_PTR(glColorTableParameterfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorTableParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTableParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTableParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTableParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTableParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTableParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTableParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glColorTableParameterfv_Idx));
        if(last_diff > 1000000000){
            printf("glColorTableParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTableParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTableParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTableParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTableParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTableParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTableParameterfv_Idx) = get_ts();
        }


	

}