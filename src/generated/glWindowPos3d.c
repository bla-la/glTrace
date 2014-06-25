#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3d_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glWindowPos3d_Idx))


GLAPI void  APIENTRY glWindowPos3d(GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3d_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3d_Idx) = dlsym(RTLD_NEXT,"glWindowPos3d");
            if(!GL_ENTRY_PTR(glWindowPos3d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3d_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3d_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3d_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3d_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3d_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3d_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3d_Idx) = get_ts();
        }


	

}