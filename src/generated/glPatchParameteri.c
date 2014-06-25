#include <glTraceCommon.h>
#include <generated.h>

#define glPatchParameteri_wrp						\
    ((void  (*)(GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glPatchParameteri_Idx))


GLAPI void  APIENTRY glPatchParameteri(GLenum pname,GLint value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPatchParameteri_Idx))
	{
            GL_ENTRY_PTR(glPatchParameteri_Idx) = dlsym(RTLD_NEXT,"glPatchParameteri");
            if(!GL_ENTRY_PTR(glPatchParameteri_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPatchParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glPatchParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPatchParameteri_wrp(pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPatchParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPatchParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glPatchParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPatchParameteri_Idx),
				 GL_ENTRY_LAST_TS(glPatchParameteri_Idx));
        if(last_diff > 1000000000){
            printf("glPatchParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPatchParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glPatchParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPatchParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPatchParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPatchParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPatchParameteri_Idx) = get_ts();
        }


	

}