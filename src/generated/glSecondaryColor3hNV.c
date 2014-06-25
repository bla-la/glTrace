#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColor3hNV_wrp						\
    ((void  (*)(GLhalfNV red,GLhalfNV green,GLhalfNV blue                                        \
    ))GL_ENTRY_PTR(glSecondaryColor3hNV_Idx))


GLAPI void  APIENTRY glSecondaryColor3hNV(GLhalfNV red,GLhalfNV green,GLhalfNV blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSecondaryColor3hNV_Idx))
	{
            GL_ENTRY_PTR(glSecondaryColor3hNV_Idx) = dlsym(RTLD_NEXT,"glSecondaryColor3hNV");
            if(!GL_ENTRY_PTR(glSecondaryColor3hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSecondaryColor3hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColor3hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColor3hNV_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColor3hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColor3hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColor3hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColor3hNV_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColor3hNV_Idx));
        if(last_diff > 1000000000){
            printf("glSecondaryColor3hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColor3hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColor3hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColor3hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColor3hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColor3hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColor3hNV_Idx) = get_ts();
        }


	

}