#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexBumpParameterivATI_wrp						\
    ((void  (*)(GLenum pname,GLint *param                                        \
    ))GL_ENTRY_PTR(glGetTexBumpParameterivATI_Idx))


GLAPI void  APIENTRY glGetTexBumpParameterivATI(GLenum pname,GLint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexBumpParameterivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexBumpParameterivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexBumpParameterivATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexBumpParameterivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexBumpParameterivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexBumpParameterivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexBumpParameterivATI_Idx),
				 GL_ENTRY_LAST_TS(glGetTexBumpParameterivATI_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexBumpParameterivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexBumpParameterivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexBumpParameterivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexBumpParameterivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexBumpParameterivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexBumpParameterivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexBumpParameterivATI_Idx) = get_ts();
        }


	

}