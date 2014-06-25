#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3ubEXT_wrp						\
    ((void  (*)(GLubyte red,GLubyte green,GLubyte blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3ubEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3ubEXT(GLubyte red,GLubyte green,GLubyte blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3ubEXT_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3ubEXT_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3ubEXT");
            if(!GL_ENTRY_PTR(glSecondaryColor3ubEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3ubEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3ubEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3ubEXT_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3ubEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3ubEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3ubEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3ubEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3ubEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3ubEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3ubEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3ubEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3ubEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3ubEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3ubEXT_Idx) = get_ts();
        }


	

}