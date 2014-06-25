#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1bvOES_wrp						\
    ((void  (*)(const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glTexCoord1bvOES_Idx))


GLAPI void  APIENTRY glTexCoord1bvOES(const GLbyte *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1bvOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1bvOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord1bvOES");
            if(!GL_ENTRY_PTR(glTexCoord1bvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1bvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1bvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1bvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1bvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1bvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1bvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1bvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1bvOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1bvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1bvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1bvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1bvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1bvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1bvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1bvOES_Idx) = get_ts();
        }


	

}