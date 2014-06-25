#include <glTraceCommon.h>
#include <generated.h>

#define glGetMapParameterivNV_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMapParameterivNV_Idx))


GLAPI void  APIENTRY glGetMapParameterivNV(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMapParameterivNV_Idx))
	{
            GL_ENTRY_PTR(glGetMapParameterivNV_Idx) = dlsym(RTLD_NEXT,"glGetMapParameterivNV");
            if(!GL_ENTRY_PTR(glGetMapParameterivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMapParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMapParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMapParameterivNV_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMapParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMapParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMapParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMapParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetMapParameterivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetMapParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMapParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetMapParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMapParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMapParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMapParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMapParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMapParameterivNV_Idx) = get_ts();
        }


	

}