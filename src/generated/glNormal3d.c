#include <glTraceCommon.h>
#include <generated.h>

#define glNormal3d_wrp						\
    ((void  (*)(GLdouble nx,GLdouble ny,GLdouble nz                                        \
    ))GL_ENTRY_PTR(glNormal3d_Idx))


GLAPI void  APIENTRY glNormal3d(GLdouble nx,GLdouble ny,GLdouble nz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormal3d_Idx))
	{
            GL_ENTRY_PTR(glNormal3d_Idx) = dlsym(RTLD_NEXT,"glNormal3d");
            if(!GL_ENTRY_PTR(glNormal3d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormal3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormal3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormal3d_wrp(nx,ny,nz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormal3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormal3d_Idx) ++;

        GL_ENTRY_LAST_TS(glNormal3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormal3d_Idx),
				 GL_ENTRY_LAST_TS(glNormal3d_Idx));
        if(last_diff > 1000000000){
            printf("glNormal3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormal3d_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3d_Idx),
	             GL_ENTRY_CALL_TIME(glNormal3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormal3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormal3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormal3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormal3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormal3d_Idx) = get_ts();
        }


	

}