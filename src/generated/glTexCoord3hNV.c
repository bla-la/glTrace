#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoord3hNV_wrp						\
    ((void  (*)(GLhalfNV s,GLhalfNV t,GLhalfNV r                                        \
    ))GL_ENTRY_PTR(glTexCoord3hNV_Idx))


GLAPI void  APIENTRY glTexCoord3hNV(GLhalfNV s,GLhalfNV t,GLhalfNV r)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoord3hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoord3hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoord3hNV_wrp(s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoord3hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoord3hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoord3hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoord3hNV_Idx),
				 GL_ENTRY_LAST_TS(glTexCoord3hNV_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoord3hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoord3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoord3hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoord3hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoord3hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoord3hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoord3hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoord3hNV_Idx) = get_ts();
        }


	

}