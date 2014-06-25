#include <glTraceCommon.h>
#include <generated.h>

#define glShadeModel_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glShadeModel_Idx))


GLAPI void  APIENTRY glShadeModel(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShadeModel_Idx))
	{
            GL_ENTRY_PTR(glShadeModel_Idx) = dlsym(RTLD_NEXT,"glShadeModel");
            if(!GL_ENTRY_PTR(glShadeModel_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShadeModel_Idx))
    	{
            GL_ENTRY_PREV_TS(glShadeModel_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShadeModel_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShadeModel_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShadeModel_Idx) ++;

        GL_ENTRY_LAST_TS(glShadeModel_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShadeModel_Idx),
				 GL_ENTRY_LAST_TS(glShadeModel_Idx));
        if(last_diff > 1000000000){
            printf("glShadeModel %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShadeModel_Idx),
	             GL_ENTRY_CALL_TIME(glShadeModel_Idx),
	             GL_ENTRY_CALL_TIME(glShadeModel_Idx) /
	             GL_ENTRY_CALL_COUNT(glShadeModel_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShadeModel_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShadeModel_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShadeModel_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShadeModel_Idx) = get_ts();
        }


	

}