#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord4bvOES_wrp						\
    ((void  (*)(const GLbyte *coords                                        \
    ))GL_ENTRY_PTR(glTexCoord4bvOES_Idx))


GLAPI void  APIENTRY glTexCoord4bvOES(const GLbyte *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord4bvOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord4bvOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord4bvOES");
            if(!GL_ENTRY_PTR(glTexCoord4bvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord4bvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord4bvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord4bvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord4bvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord4bvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord4bvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord4bvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord4bvOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord4bvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord4bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4bvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord4bvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord4bvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord4bvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord4bvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord4bvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord4bvOES_Idx) = get_ts();
        }


	

}