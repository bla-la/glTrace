#include <glTraceCommon.h>
#include <generated.h>

#define glMapParameterfvNV_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glMapParameterfvNV_Idx))


GLAPI void  APIENTRY glMapParameterfvNV(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapParameterfvNV_Idx))
	{
            GL_ENTRY_PTR(glMapParameterfvNV_Idx) = dlsym(RTLD_NEXT,"glMapParameterfvNV");
            if(!GL_ENTRY_PTR(glMapParameterfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapParameterfvNV_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMapParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glMapParameterfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glMapParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapParameterfvNV_Idx) = get_ts();
        }


	

}