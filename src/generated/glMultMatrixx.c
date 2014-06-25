#include <glTraceCommon.h>
#include <generated.h>

#define glMultMatrixx_wrp						\
    ((void  (*)(const GLfixed *m                                        \
    ))GL_ENTRY_PTR(glMultMatrixx_Idx))


GLAPI void  APIENTRY glMultMatrixx(const GLfixed *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultMatrixx_Idx))
	{
            GL_ENTRY_PTR(glMultMatrixx_Idx) = dlsym(RTLD_NEXT,"glMultMatrixx");
            if(!GL_ENTRY_PTR(glMultMatrixx_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultMatrixx_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultMatrixx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultMatrixx_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultMatrixx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultMatrixx_Idx) ++;

        GL_ENTRY_LAST_TS(glMultMatrixx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultMatrixx_Idx),
				 GL_ENTRY_LAST_TS(glMultMatrixx_Idx));
        if(last_diff > 1000000000){
            printf("glMultMatrixx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultMatrixx_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixx_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixx_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultMatrixx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultMatrixx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultMatrixx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultMatrixx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultMatrixx_Idx) = get_ts();
        }


	

}