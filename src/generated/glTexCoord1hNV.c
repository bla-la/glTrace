#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord1hNV_wrp						\
    ((void  (*)(GLhalfNV s                                        \
    ))GL_ENTRY_PTR(glTexCoord1hNV_Idx))


GLAPI void  APIENTRY glTexCoord1hNV(GLhalfNV s)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord1hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord1hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord1hNV_wrp(s);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord1hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord1hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord1hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord1hNV_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord1hNV_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord1hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord1hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord1hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord1hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord1hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord1hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord1hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord1hNV_Idx) = get_ts();
        }


	

}