#include <glTraceCommon.h>
#include <generated.h>

#define glTexBumpParameterfvATI_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *param                                        \
    ))GL_ENTRY_PTR(glTexBumpParameterfvATI_Idx))


GLAPI void  APIENTRY glTexBumpParameterfvATI(GLenum pname,const GLfloat *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexBumpParameterfvATI_Idx))
	{
            GL_ENTRY_PTR(glTexBumpParameterfvATI_Idx) = dlsym(RTLD_NEXT,"glTexBumpParameterfvATI");
            if(!GL_ENTRY_PTR(glTexBumpParameterfvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexBumpParameterfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBumpParameterfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBumpParameterfvATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBumpParameterfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBumpParameterfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBumpParameterfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBumpParameterfvATI_Idx),
				 GL_ENTRY_LAST_TS(glTexBumpParameterfvATI_Idx));
        if(last_diff > 1000000000){
            printf("glTexBumpParameterfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBumpParameterfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glTexBumpParameterfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glTexBumpParameterfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBumpParameterfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBumpParameterfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBumpParameterfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBumpParameterfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBumpParameterfvATI_Idx) = get_ts();
        }


	

}