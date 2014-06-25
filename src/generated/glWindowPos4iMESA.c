#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4iMESA_wrp						\
    ((void  (*)(GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glWindowPos4iMESA_Idx))


GLAPI void  APIENTRY glWindowPos4iMESA(GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos4iMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos4iMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos4iMESA");
            if(!GL_ENTRY_PTR(glWindowPos4iMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos4iMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4iMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4iMESA_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4iMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4iMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4iMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4iMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4iMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos4iMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4iMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4iMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4iMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4iMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4iMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4iMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4iMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4iMESA_Idx) = get_ts();
        }


	

}