#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexBumpParameterfvATI_wrp						\
    ((void  (*)(GLenum pname,GLfloat *param                                        \
    ))GL_ENTRY_PTR(glGetTexBumpParameterfvATI_Idx))


GLAPI void  APIENTRY glGetTexBumpParameterfvATI(GLenum pname,GLfloat *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexBumpParameterfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexBumpParameterfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexBumpParameterfvATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexBumpParameterfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexBumpParameterfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexBumpParameterfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexBumpParameterfvATI_Idx),
				 GL_ENTRY_LAST_TS(glGetTexBumpParameterfvATI_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexBumpParameterfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexBumpParameterfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexBumpParameterfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexBumpParameterfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexBumpParameterfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexBumpParameterfvATI_Idx) = get_ts();
        }


	

}