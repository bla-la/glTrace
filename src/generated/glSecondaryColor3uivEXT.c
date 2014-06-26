#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3uivEXT_wrp						\
    ((void  (*)(const GLuint *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3uivEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3uivEXT(const GLuint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3uivEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3uivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3uivEXT_Idx) = get_ts();
        }


	

}