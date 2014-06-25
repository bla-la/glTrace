#include <glTraceCommon.h>
#include <generated.h>

#define glColor4usv_wrp						\
    ((void  (*)(const GLushort *v                                        \
    ))GL_ENTRY_PTR(glColor4usv_Idx))


GLAPI void  APIENTRY glColor4usv(const GLushort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4usv_Idx))
	{
            GL_ENTRY_PTR(glColor4usv_Idx) = dlsym(RTLD_NEXT,"glColor4usv");
            if(!GL_ENTRY_PTR(glColor4usv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4usv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4usv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4usv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4usv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4usv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4usv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4usv_Idx),
				 GL_ENTRY_LAST_TS(glColor4usv_Idx));
        if(last_diff > 1000000000){
            printf("glColor4usv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4usv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4usv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4usv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4usv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4usv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4usv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4usv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4usv_Idx) = get_ts();
        }


	

}