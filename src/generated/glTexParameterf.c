#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterf_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glTexParameterf_Idx))


GLAPI void  APIENTRY glTexParameterf(GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexParameterf_Idx))
	{
            GL_ENTRY_PTR(glTexParameterf_Idx) = dlsym(RTLD_NEXT,"glTexParameterf");
            if(!GL_ENTRY_PTR(glTexParameterf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexParameterf_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterf_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterf_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterf_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterf_Idx));
        if(last_diff > 1000000000){
            printf("glTexParameterf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterf_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterf_Idx) = get_ts();
        }


	

}