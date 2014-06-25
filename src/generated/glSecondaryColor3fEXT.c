#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3fEXT_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3fEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3fEXT(GLfloat red,GLfloat green,GLfloat blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3fEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3fEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3fEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3fEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3fEXT_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3fEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3fEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3fEXT_Idx) = get_ts();
        }


	

}