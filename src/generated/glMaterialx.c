#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialx_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glMaterialx_Idx))


GLAPI void  APIENTRY glMaterialx(GLenum face,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialx_Idx))
	{
            GL_ENTRY_PTR(glMaterialx_Idx) = dlsym(RTLD_NEXT,"glMaterialx");
            if(!GL_ENTRY_PTR(glMaterialx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialx_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialx_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialx_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialx_Idx),
				 GL_ENTRY_LAST_TS(glMaterialx_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialx_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialx_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialx_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialx_Idx) = get_ts();
        }


	

}