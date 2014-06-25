#include <glTraceCommon.h>
#include <generated.h>

#define glGetFloatv_wrp						\
    ((void  (*)(GLenum pname,GLfloat *data                                        \
    ))GL_ENTRY_PTR(glGetFloatv_Idx))


GLAPI void  APIENTRY glGetFloatv(GLenum pname,GLfloat *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFloatv_Idx))
	{
            GL_ENTRY_PTR(glGetFloatv_Idx) = dlsym(RTLD_NEXT,"glGetFloatv");
            if(!GL_ENTRY_PTR(glGetFloatv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFloatv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFloatv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFloatv_wrp(pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFloatv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFloatv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFloatv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFloatv_Idx),
				 GL_ENTRY_LAST_TS(glGetFloatv_Idx));
        if(last_diff > 1000000000){
            printf("glGetFloatv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFloatv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloatv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFloatv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFloatv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFloatv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFloatv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFloatv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFloatv_Idx) = get_ts();
        }


	

}