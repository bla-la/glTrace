#include <glTraceCommon.h>
#include <generated.h>

#define glOrtho_wrp						\
    ((void  (*)(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar                                        \
    ))GL_ENTRY_PTR(glOrtho_Idx))


GLAPI void  APIENTRY glOrtho(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top,GLdouble zNear,GLdouble zFar)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glOrtho_Idx))
	{
            GL_ENTRY_PTR(glOrtho_Idx) = dlsym(RTLD_NEXT,"glOrtho");
            if(!GL_ENTRY_PTR(glOrtho_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glOrtho_Idx))
    	{
            GL_ENTRY_PREV_TS(glOrtho_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glOrtho_wrp(left,right,bottom,top,zNear,zFar);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glOrtho_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glOrtho_Idx) ++;

        GL_ENTRY_LAST_TS(glOrtho_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glOrtho_Idx),
				 GL_ENTRY_LAST_TS(glOrtho_Idx));
        if(last_diff > 1000000000){
            printf("glOrtho %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glOrtho_Idx),
	             GL_ENTRY_CALL_TIME(glOrtho_Idx),
	             GL_ENTRY_CALL_TIME(glOrtho_Idx) /
	             GL_ENTRY_CALL_COUNT(glOrtho_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glOrtho_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glOrtho_Idx) = 0;
             GL_ENTRY_CALL_TIME(glOrtho_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glOrtho_Idx) = get_ts();
        }


	

}