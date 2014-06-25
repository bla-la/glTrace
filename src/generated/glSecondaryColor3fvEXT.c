#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3fvEXT_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3fvEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3fvEXT(const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3fvEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3fvEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3fvEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3fvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3fvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3fvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3fvEXT_Idx) = get_ts();
        }


	

}