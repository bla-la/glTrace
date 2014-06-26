#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3uiEXT_wrp						\
    ((void  (*)(GLuint red,GLuint green,GLuint blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3uiEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3uiEXT(GLuint red,GLuint green,GLuint blue)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3uiEXT_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3uiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3uiEXT_Idx) = get_ts();
        }


	

}