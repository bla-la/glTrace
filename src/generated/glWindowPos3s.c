#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3s_wrp						\
    ((void  (*)(GLshort x,GLshort y,GLshort z                                        \
    ))GL_ENTRY_PTR(glWindowPos3s_Idx))


GLAPI void  APIENTRY glWindowPos3s(GLshort x,GLshort y,GLshort z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3s_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3s_Idx) = dlsym(RTLD_NEXT,"glWindowPos3s");
            if(!GL_ENTRY_PTR(glWindowPos3s_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3s_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3s_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3s_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3s_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3s_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3s_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3s_Idx) = get_ts();
        }


	

}