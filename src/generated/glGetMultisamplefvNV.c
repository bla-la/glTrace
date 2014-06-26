#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultisamplefvNV_wrp						\
    ((void  (*)(GLenum pname,GLuint index,GLfloat *val                                        \
    ))GL_ENTRY_PTR(glGetMultisamplefvNV_Idx))


GLAPI void  APIENTRY glGetMultisamplefvNV(GLenum pname,GLuint index,GLfloat *val)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultisamplefvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultisamplefvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultisamplefvNV_wrp(pname,index,val);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultisamplefvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultisamplefvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultisamplefvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultisamplefvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetMultisamplefvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultisamplefvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultisamplefvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultisamplefvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultisamplefvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultisamplefvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultisamplefvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultisamplefvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultisamplefvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultisamplefvNV_Idx) = get_ts();
        }


	

}