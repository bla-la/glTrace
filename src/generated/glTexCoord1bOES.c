#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1bOES_wrp						\
    ((void  (*)(GLbyte s                                        \
    ))GL_ENTRY_PTR(glTexCoord1bOES_Idx))


GLAPI void  APIENTRY glTexCoord1bOES(GLbyte s)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord1bOES_Idx))
	{
            GL_ENTRY_PTR(glTexCoord1bOES_Idx) = dlsym(RTLD_NEXT,"glTexCoord1bOES");
            if(!GL_ENTRY_PTR(glTexCoord1bOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord1bOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1bOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1bOES_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1bOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1bOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1bOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1bOES_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1bOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord1bOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1bOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1bOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1bOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1bOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1bOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1bOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1bOES_Idx) = get_ts();
        }


	

}