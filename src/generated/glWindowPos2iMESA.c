#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2iMESA_wrp						\
    ((void  (*)(GLint x,GLint y                                        \
    ))GL_ENTRY_PTR(glWindowPos2iMESA_Idx))


GLAPI void  APIENTRY glWindowPos2iMESA(GLint x,GLint y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2iMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2iMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos2iMESA");
            if(!GL_ENTRY_PTR(glWindowPos2iMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2iMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2iMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2iMESA_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2iMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2iMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2iMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2iMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2iMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2iMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2iMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2iMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2iMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2iMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2iMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2iMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2iMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2iMESA_Idx) = get_ts();
        }


	

}