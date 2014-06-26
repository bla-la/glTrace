#include <glTraceCommon.h>
#include <generated.h>

#define glPrioritizeTexturesEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *textures,const GLclampf *priorities                                        \
    ))GL_ENTRY_PTR(glPrioritizeTexturesEXT_Idx))


GLAPI void  APIENTRY glPrioritizeTexturesEXT(GLsizei n,const GLuint *textures,const GLclampf *priorities)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPrioritizeTexturesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrioritizeTexturesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrioritizeTexturesEXT_wrp(n,textures,priorities);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrioritizeTexturesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrioritizeTexturesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPrioritizeTexturesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrioritizeTexturesEXT_Idx),
				 GL_ENTRY_LAST_TS(glPrioritizeTexturesEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPrioritizeTexturesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTexturesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTexturesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrioritizeTexturesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrioritizeTexturesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrioritizeTexturesEXT_Idx) = get_ts();
        }


	

}