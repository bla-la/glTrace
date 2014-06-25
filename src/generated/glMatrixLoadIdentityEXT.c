#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixLoadIdentityEXT_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glMatrixLoadIdentityEXT_Idx))


GLAPI void  APIENTRY glMatrixLoadIdentityEXT(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixLoadIdentityEXT_Idx))
	{
            GL_ENTRY_PTR(glMatrixLoadIdentityEXT_Idx) = dlsym(RTLD_NEXT,"glMatrixLoadIdentityEXT");
            if(!GL_ENTRY_PTR(glMatrixLoadIdentityEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixLoadIdentityEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixLoadIdentityEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixLoadIdentityEXT_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixLoadIdentityEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixLoadIdentityEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixLoadIdentityEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixLoadIdentityEXT_Idx),
				 GL_ENTRY_LAST_TS(glMatrixLoadIdentityEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixLoadIdentityEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixLoadIdentityEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadIdentityEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixLoadIdentityEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixLoadIdentityEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixLoadIdentityEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixLoadIdentityEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixLoadIdentityEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixLoadIdentityEXT_Idx) = get_ts();
        }


	

}