#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3ubvEXT_wrp						\
    ((void  (*)(const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3ubvEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3ubvEXT(const GLubyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3ubvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3ubvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3ubvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3ubvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3ubvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3ubvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3ubvEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3ubvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3ubvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3ubvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3ubvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3ubvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3ubvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3ubvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3ubvEXT_Idx) = get_ts();
        }


	

}