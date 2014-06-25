#include <glTraceCommon.h>
#include <generated.h>

#define glColor3bv_wrp						\
    ((void  (*)(const GLbyte *v                                        \
    ))GL_ENTRY_PTR(glColor3bv_Idx))


GLAPI void  APIENTRY glColor3bv(const GLbyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3bv_Idx))
	{
            GL_ENTRY_PTR(glColor3bv_Idx) = dlsym(RTLD_NEXT,"glColor3bv");
            if(!GL_ENTRY_PTR(glColor3bv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3bv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3bv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3bv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3bv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3bv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3bv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3bv_Idx),
				 GL_ENTRY_LAST_TS(glColor3bv_Idx));
        if(last_diff > 1000000000){
            printf("glColor3bv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3bv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3bv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3bv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3bv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3bv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3bv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3bv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3bv_Idx) = get_ts();
        }


	

}