#include <glTraceCommon.h>
#include <generated.h>

#define glLightModeli_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glLightModeli_Idx))


GLAPI void  APIENTRY glLightModeli(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLightModeli_Idx))
	{
            GL_ENTRY_PTR(glLightModeli_Idx) = dlsym(RTLD_NEXT,"glLightModeli");
            if(!GL_ENTRY_PTR(glLightModeli_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLightModeli_Idx))
    	{
            GL_ENTRY_PREV_TS(glLightModeli_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLightModeli_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLightModeli_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLightModeli_Idx) ++;

        GL_ENTRY_LAST_TS(glLightModeli_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLightModeli_Idx),
				 GL_ENTRY_LAST_TS(glLightModeli_Idx));
        if(last_diff > 1000000000){
            printf("glLightModeli %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLightModeli_Idx),
	             GL_ENTRY_CALL_TIME(glLightModeli_Idx),
	             GL_ENTRY_CALL_TIME(glLightModeli_Idx) /
	             GL_ENTRY_CALL_COUNT(glLightModeli_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLightModeli_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLightModeli_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLightModeli_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLightModeli_Idx) = get_ts();
        }


	

}