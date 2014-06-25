#include <glTraceCommon.h>
#include <generated.h>

#define glPrioritizeTexturesxOES_wrp						\
    ((void  (*)(GLsizei n,const GLuint *textures,const GLfixed *priorities                                        \
    ))GL_ENTRY_PTR(glPrioritizeTexturesxOES_Idx))


GLAPI void  APIENTRY glPrioritizeTexturesxOES(GLsizei n,const GLuint *textures,const GLfixed *priorities)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPrioritizeTexturesxOES_Idx))
	{
            GL_ENTRY_PTR(glPrioritizeTexturesxOES_Idx) = dlsym(RTLD_NEXT,"glPrioritizeTexturesxOES");
            if(!GL_ENTRY_PTR(glPrioritizeTexturesxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPrioritizeTexturesxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrioritizeTexturesxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrioritizeTexturesxOES_wrp(n,textures,priorities);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrioritizeTexturesxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrioritizeTexturesxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPrioritizeTexturesxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrioritizeTexturesxOES_Idx),
				 GL_ENTRY_LAST_TS(glPrioritizeTexturesxOES_Idx));
        if(last_diff > 1000000000){
            printf("glPrioritizeTexturesxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTexturesxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTexturesxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrioritizeTexturesxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrioritizeTexturesxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrioritizeTexturesxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrioritizeTexturesxOES_Idx) = get_ts();
        }


	

}