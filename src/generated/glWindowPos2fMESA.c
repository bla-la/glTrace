#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2fMESA_wrp						\
    ((void  (*)(GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glWindowPos2fMESA_Idx))


GLAPI void  APIENTRY glWindowPos2fMESA(GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2fMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2fMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos2fMESA");
            if(!GL_ENTRY_PTR(glWindowPos2fMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2fMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2fMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2fMESA_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2fMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2fMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2fMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2fMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2fMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2fMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2fMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2fMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2fMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2fMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2fMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2fMESA_Idx) = get_ts();
        }


	

}