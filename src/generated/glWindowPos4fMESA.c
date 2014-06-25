#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4fMESA_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glWindowPos4fMESA_Idx))


GLAPI void  APIENTRY glWindowPos4fMESA(GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos4fMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos4fMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos4fMESA");
            if(!GL_ENTRY_PTR(glWindowPos4fMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos4fMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4fMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4fMESA_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4fMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4fMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4fMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4fMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4fMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos4fMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4fMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4fMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4fMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4fMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4fMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4fMESA_Idx) = get_ts();
        }


	

}