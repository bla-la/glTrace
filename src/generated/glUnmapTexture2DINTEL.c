#include <glTraceCommon.h>
#include <generated.h>

#define glUnmapTexture2DINTEL_wrp						\
    ((void  (*)(GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glUnmapTexture2DINTEL_Idx))


GLAPI void  APIENTRY glUnmapTexture2DINTEL(GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUnmapTexture2DINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glUnmapTexture2DINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUnmapTexture2DINTEL_wrp(texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUnmapTexture2DINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUnmapTexture2DINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glUnmapTexture2DINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUnmapTexture2DINTEL_Idx),
				 GL_ENTRY_LAST_TS(glUnmapTexture2DINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glUnmapTexture2DINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUnmapTexture2DINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapTexture2DINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapTexture2DINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glUnmapTexture2DINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUnmapTexture2DINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUnmapTexture2DINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUnmapTexture2DINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUnmapTexture2DINTEL_Idx) = get_ts();
        }


	

}