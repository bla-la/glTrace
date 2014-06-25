#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultisamplefv_wrp						\
    ((void  (*)(GLenum pname,GLuint index,GLfloat *val                                        \
    ))GL_ENTRY_PTR(glGetMultisamplefv_Idx))


GLAPI void  APIENTRY glGetMultisamplefv(GLenum pname,GLuint index,GLfloat *val)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMultisamplefv_Idx))
	{
            GL_ENTRY_PTR(glGetMultisamplefv_Idx) = dlsym(RTLD_NEXT,"glGetMultisamplefv");
            if(!GL_ENTRY_PTR(glGetMultisamplefv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMultisamplefv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultisamplefv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultisamplefv_wrp(pname,index,val);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultisamplefv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultisamplefv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultisamplefv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultisamplefv_Idx),
				 GL_ENTRY_LAST_TS(glGetMultisamplefv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMultisamplefv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultisamplefv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultisamplefv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultisamplefv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultisamplefv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultisamplefv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultisamplefv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultisamplefv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultisamplefv_Idx) = get_ts();
        }


	

}