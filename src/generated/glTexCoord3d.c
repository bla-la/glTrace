#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3d_wrp						\
    ((void  (*)(GLdouble s,GLdouble t,GLdouble r                                        \
    ))GL_ENTRY_PTR(glTexCoord3d_Idx))


GLAPI void  APIENTRY glTexCoord3d(GLdouble s,GLdouble t,GLdouble r)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord3d_Idx))
	{
            GL_ENTRY_PTR(glTexCoord3d_Idx) = dlsym(RTLD_NEXT,"glTexCoord3d");
            if(!GL_ENTRY_PTR(glTexCoord3d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3d_wrp(s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3d_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3d_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3d_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3d_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3d_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3d_Idx) = get_ts();
        }


	

}