#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialxOES_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glMaterialxOES_Idx))


GLAPI void  APIENTRY glMaterialxOES(GLenum face,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialxOES_Idx))
	{
            GL_ENTRY_PTR(glMaterialxOES_Idx) = dlsym(RTLD_NEXT,"glMaterialxOES");
            if(!GL_ENTRY_PTR(glMaterialxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialxOES_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialxOES_Idx),
				 GL_ENTRY_LAST_TS(glMaterialxOES_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialxOES_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxOES_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialxOES_Idx) = get_ts();
        }


	

}