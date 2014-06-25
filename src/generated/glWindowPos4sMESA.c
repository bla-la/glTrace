#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4sMESA_wrp						\
    ((void  (*)(GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glWindowPos4sMESA_Idx))


GLAPI void  APIENTRY glWindowPos4sMESA(GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos4sMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos4sMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos4sMESA");
            if(!GL_ENTRY_PTR(glWindowPos4sMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos4sMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4sMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4sMESA_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4sMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4sMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4sMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4sMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4sMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos4sMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4sMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4sMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4sMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4sMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4sMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4sMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4sMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4sMESA_Idx) = get_ts();
        }


	

}