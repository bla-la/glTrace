#include <glTraceCommon.h>
#include <generated.h>

#define glTranslated_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glTranslated_Idx))


GLAPI void  APIENTRY glTranslated(GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTranslated_Idx))
	{
            GL_ENTRY_PTR(glTranslated_Idx) = dlsym(RTLD_NEXT,"glTranslated");
            if(!GL_ENTRY_PTR(glTranslated_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTranslated_Idx))
    	{
            GL_ENTRY_PREV_TS(glTranslated_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTranslated_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTranslated_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTranslated_Idx) ++;

        GL_ENTRY_LAST_TS(glTranslated_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTranslated_Idx),
				 GL_ENTRY_LAST_TS(glTranslated_Idx));
        if(last_diff > 1000000000){
            printf("glTranslated %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTranslated_Idx),
	             GL_ENTRY_CALL_TIME(glTranslated_Idx),
	             GL_ENTRY_CALL_TIME(glTranslated_Idx) /
	             GL_ENTRY_CALL_COUNT(glTranslated_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTranslated_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTranslated_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTranslated_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTranslated_Idx) = get_ts();
        }


	

}