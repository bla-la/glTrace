#include <glTraceCommon.h>
#include <generated.h>

#define glColor4uiv_wrp						\
    ((void  (*)(const GLuint *v                                        \
    ))GL_ENTRY_PTR(glColor4uiv_Idx))


GLAPI void  APIENTRY glColor4uiv(const GLuint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4uiv_Idx))
	{
            GL_ENTRY_PTR(glColor4uiv_Idx) = dlsym(RTLD_NEXT,"glColor4uiv");
            if(!GL_ENTRY_PTR(glColor4uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4uiv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4uiv_Idx),
				 GL_ENTRY_LAST_TS(glColor4uiv_Idx));
        if(last_diff > 1000000000){
            printf("glColor4uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4uiv_Idx) = get_ts();
        }


	

}