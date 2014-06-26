#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3fMESA_wrp						\
    ((void  (*)(GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glWindowPos3fMESA_Idx))


GLAPI void  APIENTRY glWindowPos3fMESA(GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos3fMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3fMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3fMESA_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3fMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3fMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3fMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3fMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3fMESA_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos3fMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3fMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3fMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3fMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3fMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3fMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3fMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3fMESA_Idx) = get_ts();
        }


	

}