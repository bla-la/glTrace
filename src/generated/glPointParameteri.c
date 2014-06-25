#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameteri_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPointParameteri_Idx))


GLAPI void  APIENTRY glPointParameteri(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPointParameteri_Idx))
	{
            GL_ENTRY_PTR(glPointParameteri_Idx) = dlsym(RTLD_NEXT,"glPointParameteri");
            if(!GL_ENTRY_PTR(glPointParameteri_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPointParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameteri_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameteri_Idx),
				 GL_ENTRY_LAST_TS(glPointParameteri_Idx));
        if(last_diff > 1000000000){
            printf("glPointParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameteri_Idx) = get_ts();
        }


	

}