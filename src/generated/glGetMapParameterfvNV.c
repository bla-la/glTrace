#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapParameterfvNV_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMapParameterfvNV_Idx))


GLAPI void  APIENTRY glGetMapParameterfvNV(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMapParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapParameterfvNV_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetMapParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetMapParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapParameterfvNV_Idx) = get_ts();
        }


	

}