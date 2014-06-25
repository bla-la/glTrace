#include <glTraceCommon.h>
#include <generated.h>

#define glGetMaterialiv_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMaterialiv_Idx))


GLAPI void  APIENTRY glGetMaterialiv(GLenum face,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMaterialiv_Idx))
	{
            GL_ENTRY_PTR(glGetMaterialiv_Idx) = dlsym(RTLD_NEXT,"glGetMaterialiv");
            if(!GL_ENTRY_PTR(glGetMaterialiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMaterialiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMaterialiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMaterialiv_wrp(face,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMaterialiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMaterialiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMaterialiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMaterialiv_Idx),
				 GL_ENTRY_LAST_TS(glGetMaterialiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMaterialiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMaterialiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMaterialiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMaterialiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMaterialiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMaterialiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMaterialiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMaterialiv_Idx) = get_ts();
        }


	

}