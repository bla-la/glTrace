#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2sv_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertex2sv_Idx))


GLAPI void  APIENTRY glVertex2sv(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2sv_Idx))
	{
            GL_ENTRY_PTR(glVertex2sv_Idx) = dlsym(RTLD_NEXT,"glVertex2sv");
            if(!GL_ENTRY_PTR(glVertex2sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2sv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2sv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2sv_Idx),
				 GL_ENTRY_LAST_TS(glVertex2sv_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2sv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2sv_Idx) = get_ts();
        }


	

}