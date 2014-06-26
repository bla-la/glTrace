#include <glTraceCommon.h>
#include <generated.h>

#define glColorMaskIndexedEXT_wrp						\
    ((void  (*)(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a                                        \
    ))GL_ENTRY_PTR(glColorMaskIndexedEXT_Idx))


GLAPI void  APIENTRY glColorMaskIndexedEXT(GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorMaskIndexedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorMaskIndexedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorMaskIndexedEXT_wrp(index,r,g,b,a);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorMaskIndexedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorMaskIndexedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glColorMaskIndexedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorMaskIndexedEXT_Idx),
				 GL_ENTRY_LAST_TS(glColorMaskIndexedEXT_Idx));


        if(last_diff > 1000000000){
            printf("glColorMaskIndexedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorMaskIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaskIndexedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glColorMaskIndexedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorMaskIndexedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorMaskIndexedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorMaskIndexedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorMaskIndexedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorMaskIndexedEXT_Idx) = get_ts();
        }


	

}