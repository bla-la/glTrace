#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2sv_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos2sv_Idx))


GLAPI void  APIENTRY glWindowPos2sv(const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos2sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2sv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2sv_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2sv_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2sv_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos2sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2sv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2sv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2sv_Idx) = get_ts();
        }


	

}