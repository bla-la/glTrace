#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfv_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPointParameterfv_Idx))


GLAPI void  APIENTRY glPointParameterfv(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameterfv_Idx))
	{
            GL_ENTRY_PTR(glPointParameterfv_Idx) = dlsym(RTLD_NEXT,"glPointParameterfv");
            if(!GL_ENTRY_PTR(glPointParameterfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfv_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfv_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfv_Idx) = get_ts();
        }


	

}