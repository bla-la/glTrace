#include <glTraceCommon.h>
#include <generated.h>

#define glQueryObjectParameteruiAMD_wrp						\
    ((void  (*)(GLenum target,GLuint id,GLenum pname,GLuint param                                        \
    ))GL_ENTRY_PTR(glQueryObjectParameteruiAMD_Idx))


GLAPI void  APIENTRY glQueryObjectParameteruiAMD(GLenum target,GLuint id,GLenum pname,GLuint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glQueryObjectParameteruiAMD_Idx))
	{
            GL_ENTRY_PTR(glQueryObjectParameteruiAMD_Idx) = dlsym(RTLD_NEXT,"glQueryObjectParameteruiAMD");
            if(!GL_ENTRY_PTR(glQueryObjectParameteruiAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glQueryObjectParameteruiAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glQueryObjectParameteruiAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glQueryObjectParameteruiAMD_wrp(target,id,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glQueryObjectParameteruiAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glQueryObjectParameteruiAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glQueryObjectParameteruiAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glQueryObjectParameteruiAMD_Idx),
				 GL_ENTRY_LAST_TS(glQueryObjectParameteruiAMD_Idx));
        if(last_diff > 1000000000){
            printf("glQueryObjectParameteruiAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glQueryObjectParameteruiAMD_Idx),
	             GL_ENTRY_CALL_TIME(glQueryObjectParameteruiAMD_Idx),
	             GL_ENTRY_CALL_TIME(glQueryObjectParameteruiAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glQueryObjectParameteruiAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glQueryObjectParameteruiAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glQueryObjectParameteruiAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glQueryObjectParameteruiAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glQueryObjectParameteruiAMD_Idx) = get_ts();
        }


	

}