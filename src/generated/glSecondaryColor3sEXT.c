#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3sEXT_wrp						\
    ((void  (*)(GLshort red,GLshort green,GLshort blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3sEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3sEXT(GLshort red,GLshort green,GLshort blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3sEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3sEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3sEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3sEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3sEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3sEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3sEXT_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3sEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3sEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3sEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3sEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3sEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3sEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3sEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3sEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3sEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3sEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3sEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3sEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3sEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3sEXT_Idx) = get_ts();
        }


	

}