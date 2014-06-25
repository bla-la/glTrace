#include <glTraceCommon.h>
#include <generated.h>

#define glActiveTexture_wrp						\
    ((void  (*)(GLenum texture                                        \
    ))GL_ENTRY_PTR(glActiveTexture_Idx))


GLAPI void  APIENTRY glActiveTexture(GLenum texture)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glActiveTexture_Idx))
	{
            GL_ENTRY_PTR(glActiveTexture_Idx) = dlsym(RTLD_NEXT,"glActiveTexture");
            if(!GL_ENTRY_PTR(glActiveTexture_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glActiveTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveTexture_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveTexture_Idx),
				 GL_ENTRY_LAST_TS(glActiveTexture_Idx));
        if(last_diff > 1000000000){
            printf("glActiveTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveTexture_Idx),
	             GL_ENTRY_CALL_TIME(glActiveTexture_Idx),
	             GL_ENTRY_CALL_TIME(glActiveTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveTexture_Idx) = get_ts();
        }


	

}