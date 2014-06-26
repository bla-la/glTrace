#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapAttribParameterfvNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMapAttribParameterfvNV_Idx))


GLAPI void  APIENTRY glGetMapAttribParameterfvNV(GLenum target,GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMapAttribParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapAttribParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapAttribParameterfvNV_wrp(target,index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapAttribParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapAttribParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapAttribParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapAttribParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetMapAttribParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetMapAttribParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapAttribParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapAttribParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapAttribParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapAttribParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapAttribParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapAttribParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapAttribParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapAttribParameterfvNV_Idx) = get_ts();
        }


	

}