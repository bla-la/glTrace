#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3dARB_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glWindowPos3dARB_Idx))


GLAPI void  APIENTRY glWindowPos3dARB(GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos3dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3dARB_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3dARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3dARB_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos3dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3dARB_Idx) = get_ts();
        }


	

}