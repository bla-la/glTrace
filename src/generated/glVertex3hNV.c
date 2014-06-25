#include <glTraceCommon.h>
#include <generated.h>

#define glVertex3hNV_wrp						\
    ((void  (*)(GLhalfNV x,GLhalfNV y,GLhalfNV z                                        \
    ))GL_ENTRY_PTR(glVertex3hNV_Idx))


GLAPI void  APIENTRY glVertex3hNV(GLhalfNV x,GLhalfNV y,GLhalfNV z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex3hNV_Idx))
	{
            GL_ENTRY_PTR(glVertex3hNV_Idx) = dlsym(RTLD_NEXT,"glVertex3hNV");
            if(!GL_ENTRY_PTR(glVertex3hNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex3hNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex3hNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex3hNV_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex3hNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex3hNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex3hNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex3hNV_Idx),
				 GL_ENTRY_LAST_TS(glVertex3hNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertex3hNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3hNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3hNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex3hNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex3hNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex3hNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex3hNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex3hNV_Idx) = get_ts();
        }


	

}