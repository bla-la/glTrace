#include <glTraceCommon.h>
#include <generated.h>

#define glMultMatrixf_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glMultMatrixf_Idx))


GLAPI void  APIENTRY glMultMatrixf(const GLfloat *m)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultMatrixf_Idx))
	{
            GL_ENTRY_PTR(glMultMatrixf_Idx) = dlsym(RTLD_NEXT,"glMultMatrixf");
            if(!GL_ENTRY_PTR(glMultMatrixf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultMatrixf_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultMatrixf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultMatrixf_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultMatrixf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultMatrixf_Idx) ++;

        GL_ENTRY_LAST_TS(glMultMatrixf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultMatrixf_Idx),
				 GL_ENTRY_LAST_TS(glMultMatrixf_Idx));
        if(last_diff > 1000000000){
            printf("glMultMatrixf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixf_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultMatrixf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultMatrixf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultMatrixf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultMatrixf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultMatrixf_Idx) = get_ts();
        }


	

}