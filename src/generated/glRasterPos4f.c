#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4f_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glRasterPos4f_Idx))


GLAPI void  APIENTRY glRasterPos4f(GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRasterPos4f_Idx))
	{
            GL_ENTRY_PTR(glRasterPos4f_Idx) = dlsym(RTLD_NEXT,"glRasterPos4f");
            if(!GL_ENTRY_PTR(glRasterPos4f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRasterPos4f_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4f_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4f_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4f_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4f_Idx));
        if(last_diff > 1000000000){
            printf("glRasterPos4f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4f_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4f_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4f_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4f_Idx) = get_ts();
        }


	

}