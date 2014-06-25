#include <glTraceCommon.h>
#include <generated.h>

#define glMaterialf_wrp						\
    ((void  (*)(GLenum face,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glMaterialf_Idx))


GLAPI void  APIENTRY glMaterialf(GLenum face,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMaterialf_Idx))
	{
            GL_ENTRY_PTR(glMaterialf_Idx) = dlsym(RTLD_NEXT,"glMaterialf");
            if(!GL_ENTRY_PTR(glMaterialf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMaterialf_Idx))
    	{
            GL_ENTRY_PREV_TS(glMaterialf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMaterialf_wrp(face,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMaterialf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMaterialf_Idx) ++;

        GL_ENTRY_LAST_TS(glMaterialf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMaterialf_Idx),
				 GL_ENTRY_LAST_TS(glMaterialf_Idx));
        if(last_diff > 1000000000){
            printf("glMaterialf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMaterialf_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialf_Idx),
	             GL_ENTRY_CALL_TIME(glMaterialf_Idx) /
	             GL_ENTRY_CALL_COUNT(glMaterialf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMaterialf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMaterialf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMaterialf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMaterialf_Idx) = get_ts();
        }


	

}