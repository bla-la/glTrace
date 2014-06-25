#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialxvOES_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLfixed *param                                        \
    ))GL_ENTRY_PTR(glMaterialxvOES_Idx))


GLAPI void  APIENTRY glMaterialxvOES(GLenum face,GLenum pname,const GLfixed *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialxvOES_Idx))
	{
            GL_ENTRY_PTR(glMaterialxvOES_Idx) = dlsym(RTLD_NEXT,"glMaterialxvOES");
            if(!GL_ENTRY_PTR(glMaterialxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialxvOES_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialxvOES_Idx),
				 GL_ENTRY_LAST_TS(glMaterialxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialxvOES_Idx) = get_ts();
        }


	

}