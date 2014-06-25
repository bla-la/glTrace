#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialfv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glMaterialfv_Idx))


GLAPI void  APIENTRY glMaterialfv(GLenum face,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialfv_Idx))
	{
            GL_ENTRY_PTR(glMaterialfv_Idx) = dlsym(RTLD_NEXT,"glMaterialfv");
            if(!GL_ENTRY_PTR(glMaterialfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialfv_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialfv_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialfv_Idx),
				 GL_ENTRY_LAST_TS(glMaterialfv_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialfv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialfv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialfv_Idx) = get_ts();
        }


	

}