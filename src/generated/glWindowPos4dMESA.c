#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4dMESA_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glWindowPos4dMESA_Idx))


GLAPI void  APIENTRY glWindowPos4dMESA(GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos4dMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4dMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4dMESA_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4dMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4dMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4dMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4dMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4dMESA_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos4dMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4dMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4dMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4dMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4dMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4dMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4dMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4dMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4dMESA_Idx) = get_ts();
        }


	

}