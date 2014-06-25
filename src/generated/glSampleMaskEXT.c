#include <glTraceCommon.h>
#include <generated.h>

#define glSampleMaskEXT_wrp						\
    ((void  (*)(GLclampf value,GLboolean invert                                        \
    ))GL_ENTRY_PTR(glSampleMaskEXT_Idx))


GLAPI void  APIENTRY glSampleMaskEXT(GLclampf value,GLboolean invert)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleMaskEXT_Idx))
	{
            GL_ENTRY_PTR(glSampleMaskEXT_Idx) = dlsym(RTLD_NEXT,"glSampleMaskEXT");
            if(!GL_ENTRY_PTR(glSampleMaskEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleMaskEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleMaskEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleMaskEXT_wrp(value,invert);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleMaskEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleMaskEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleMaskEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleMaskEXT_Idx),
				 GL_ENTRY_LAST_TS(glSampleMaskEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSampleMaskEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleMaskEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleMaskEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleMaskEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleMaskEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleMaskEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleMaskEXT_Idx) = get_ts();
        }


	

}