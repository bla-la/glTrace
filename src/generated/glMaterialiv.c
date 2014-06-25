#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialiv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMaterialiv_Idx))


GLAPI void  APIENTRY glMaterialiv(GLenum face,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialiv_Idx))
	{
            GL_ENTRY_PTR(glMaterialiv_Idx) = dlsym(RTLD_NEXT,"glMaterialiv");
            if(!GL_ENTRY_PTR(glMaterialiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialiv_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialiv_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialiv_Idx),
				 GL_ENTRY_LAST_TS(glMaterialiv_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialiv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialiv_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialiv_Idx) = get_ts();
        }


	

}