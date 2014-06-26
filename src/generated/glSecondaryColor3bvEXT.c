#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3bvEXT_wrp						\
    ((void  (*)(const GLbyte *v                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3bvEXT_Idx))


GLAPI void  APIENTRY glSecondaryColor3bvEXT(const GLbyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColor3bvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3bvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3bvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3bvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3bvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3bvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3bvEXT_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3bvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColor3bvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3bvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3bvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3bvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3bvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3bvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3bvEXT_Idx) = get_ts();
        }


	

}