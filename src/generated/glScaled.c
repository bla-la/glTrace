#include <glTraceCommon.h>
#include <generated.h>

#define glScaled_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glScaled_Idx))


GLAPI void  APIENTRY glScaled(GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glScaled_Idx))
	{
            GL_ENTRY_PTR(glScaled_Idx) = dlsym(RTLD_NEXT,"glScaled");
            if(!GL_ENTRY_PTR(glScaled_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glScaled_Idx))
    	{
            GL_ENTRY_PREV_TS(glScaled_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glScaled_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glScaled_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glScaled_Idx) ++;

        GL_ENTRY_LAST_TS(glScaled_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glScaled_Idx),
				 GL_ENTRY_LAST_TS(glScaled_Idx));
        if(last_diff > 1000000000){
            printf("glScaled %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glScaled_Idx),
	             GL_ENTRY_CALL_TIME(glScaled_Idx),
	             GL_ENTRY_CALL_TIME(glScaled_Idx) /
	             GL_ENTRY_CALL_COUNT(glScaled_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glScaled_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glScaled_Idx) = 0;
             GL_ENTRY_CALL_TIME(glScaled_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glScaled_Idx) = get_ts();
        }


	

}