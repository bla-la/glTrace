#include <glTraceCommon.h>
#include <generated.h>

#define glGetMaterialxvOES_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetMaterialxvOES_Idx))


GLAPI void  APIENTRY glGetMaterialxvOES(GLenum face,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMaterialxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetMaterialxvOES_Idx) = dlsym(RTLD_NEXT,"glGetMaterialxvOES");
            if(!GL_ENTRY_PTR(glGetMaterialxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMaterialxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMaterialxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMaterialxvOES_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMaterialxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMaterialxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMaterialxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMaterialxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetMaterialxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetMaterialxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMaterialxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMaterialxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMaterialxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMaterialxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMaterialxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMaterialxvOES_Idx) = get_ts();
        }


	

}