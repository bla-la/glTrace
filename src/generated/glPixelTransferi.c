#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransferi_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPixelTransferi_Idx))


GLAPI void  APIENTRY glPixelTransferi(GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTransferi_Idx))
	{
            GL_ENTRY_PTR(glPixelTransferi_Idx) = dlsym(RTLD_NEXT,"glPixelTransferi");
            if(!GL_ENTRY_PTR(glPixelTransferi_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTransferi_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransferi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransferi_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransferi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransferi_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransferi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransferi_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransferi_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTransferi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransferi_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransferi_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransferi_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransferi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransferi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransferi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransferi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransferi_Idx) = get_ts();
        }


	

}