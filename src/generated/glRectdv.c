#include <glTraceCommon.h>
#include <generated.h>

#define glRectdv_wrp						\
    ((void  (*)(const GLdouble *v1,const GLdouble *v2                                        \
    ))GL_ENTRY_PTR(glRectdv_Idx))


GLAPI void  APIENTRY glRectdv(const GLdouble *v1,const GLdouble *v2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRectdv_Idx))
	{
            GL_ENTRY_PTR(glRectdv_Idx) = dlsym(RTLD_NEXT,"glRectdv");
            if(!GL_ENTRY_PTR(glRectdv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRectdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectdv_wrp(v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectdv_Idx) ++;

        GL_ENTRY_LAST_TS(glRectdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectdv_Idx),
				 GL_ENTRY_LAST_TS(glRectdv_Idx));
        if(last_diff > 1000000000){
            printf("glRectdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectdv_Idx),
	             GL_ENTRY_CALL_TIME(glRectdv_Idx),
	             GL_ENTRY_CALL_TIME(glRectdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectdv_Idx) = get_ts();
        }


	

}