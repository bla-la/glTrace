#include <glTraceCommon.h>
#include <generated.h>

#define glTexBumpParameterivATI_wrp						\
    ((void  (*)(GLenum pname,const GLint *param                                        \
    ))GL_ENTRY_PTR(glTexBumpParameterivATI_Idx))


GLAPI void  APIENTRY glTexBumpParameterivATI(GLenum pname,const GLint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexBumpParameterivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBumpParameterivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBumpParameterivATI_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBumpParameterivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBumpParameterivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBumpParameterivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBumpParameterivATI_Idx),
				 GL_ENTRY_LAST_TS(glTexBumpParameterivATI_Idx));


        if(last_diff > 1000000000){
            printf("glTexBumpParameterivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBumpParameterivATI_Idx),
	             GL_ENTRY_CALL_TIME(glTexBumpParameterivATI_Idx),
	             GL_ENTRY_CALL_TIME(glTexBumpParameterivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBumpParameterivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBumpParameterivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBumpParameterivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBumpParameterivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBumpParameterivATI_Idx) = get_ts();
        }


	

}