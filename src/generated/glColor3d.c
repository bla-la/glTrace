#include <glTraceCommon.h>
#include <generated.h>

#define glColor3d_wrp						\
    ((void  (*)(GLdouble red,GLdouble green,GLdouble blue                                        \
    ))GL_ENTRY_PTR(glColor3d_Idx))


GLAPI void  APIENTRY glColor3d(GLdouble red,GLdouble green,GLdouble blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3d_Idx))
	{
            GL_ENTRY_PTR(glColor3d_Idx) = dlsym(RTLD_NEXT,"glColor3d");
            if(!GL_ENTRY_PTR(glColor3d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3d_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3d_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3d_Idx),
				 GL_ENTRY_LAST_TS(glColor3d_Idx));
        if(last_diff > 1000000000){
            printf("glColor3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3d_Idx),
	             GL_ENTRY_CALL_TIME(glColor3d_Idx),
	             GL_ENTRY_CALL_TIME(glColor3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3d_Idx) = get_ts();
        }


	

}