#include <glTraceCommon.h>
#include <generated.h>

#define glGetMaterialfv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMaterialfv_Idx))


GLAPI void  APIENTRY glGetMaterialfv(GLenum face,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMaterialfv_Idx))
	{
            GL_ENTRY_PTR(glGetMaterialfv_Idx) = dlsym(RTLD_NEXT,"glGetMaterialfv");
            if(!GL_ENTRY_PTR(glGetMaterialfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMaterialfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMaterialfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMaterialfv_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMaterialfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMaterialfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMaterialfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMaterialfv_Idx),
				 GL_ENTRY_LAST_TS(glGetMaterialfv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMaterialfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMaterialfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMaterialfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMaterialfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMaterialfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMaterialfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMaterialfv_Idx) = get_ts();
        }


	

}