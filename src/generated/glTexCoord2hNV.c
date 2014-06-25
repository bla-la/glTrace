#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord2hNV_wrp						\
    ((void  (*)(GLhalfNV s,GLhalfNV t                                        \
    ))GL_ENTRY_PTR(glTexCoord2hNV_Idx))


GLAPI void  APIENTRY glTexCoord2hNV(GLhalfNV s,GLhalfNV t)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexCoord2hNV_Idx))
	{
            GL_ENTRY_PTR(glTexCoord2hNV_Idx) = dlsym(RTLD_NEXT,"glTexCoord2hNV");
            if(!GL_ENTRY_PTR(glTexCoord2hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexCoord2hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord2hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord2hNV_wrp(s,t);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord2hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord2hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord2hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord2hNV_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord2hNV_Idx));
        if(last_diff > 1000000000){
            printf("glTexCoord2hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord2hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord2hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord2hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord2hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord2hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord2hNV_Idx) = get_ts();
        }


	

}