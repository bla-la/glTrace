#include <glTraceCommon.h>
#include <generated.h>

#define glRotated_wrp						\
    ((void  (*)(GLdouble angle,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glRotated_Idx))


GLAPI void  APIENTRY glRotated(GLdouble angle,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRotated_Idx))
	{
            GL_ENTRY_PTR(glRotated_Idx) = dlsym(RTLD_NEXT,"glRotated");
            if(!GL_ENTRY_PTR(glRotated_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRotated_Idx))
    	{
            GL_ENTRY_PREV_TS(glRotated_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRotated_wrp(angle,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRotated_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRotated_Idx) ++;

        GL_ENTRY_LAST_TS(glRotated_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRotated_Idx),
				 GL_ENTRY_LAST_TS(glRotated_Idx));
        if(last_diff > 1000000000){
            printf("glRotated %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRotated_Idx),
	             GL_ENTRY_CALL_TIME(glRotated_Idx),
	             GL_ENTRY_CALL_TIME(glRotated_Idx) /
	             GL_ENTRY_CALL_COUNT(glRotated_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRotated_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRotated_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRotated_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRotated_Idx) = get_ts();
        }


	

}