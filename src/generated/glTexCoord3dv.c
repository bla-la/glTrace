#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3dv_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glTexCoord3dv_Idx))


GLAPI void  APIENTRY glTexCoord3dv(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord3dv_Idx))
	{
            GL_ENTRY_PTR(glTexCoord3dv_Idx) = dlsym(RTLD_NEXT,"glTexCoord3dv");
            if(!GL_ENTRY_PTR(glTexCoord3dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord3dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3dv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3dv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3dv_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3dv_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord3dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3dv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3dv_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3dv_Idx) = get_ts();
        }


	

}