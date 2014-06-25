#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3sv_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3sv_Idx))


GLAPI void  APIENTRY glWindowPos3sv(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3sv_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3sv_Idx) = dlsym(RTLD_NEXT,"glWindowPos3sv");
            if(!GL_ENTRY_PTR(glWindowPos3sv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3sv_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3sv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3sv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3sv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3sv_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3sv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3sv_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3sv_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3sv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3sv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3sv_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3sv_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3sv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3sv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3sv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3sv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3sv_Idx) = get_ts();
        }


	

}