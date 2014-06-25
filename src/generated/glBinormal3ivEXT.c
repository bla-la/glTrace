#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3ivEXT_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glBinormal3ivEXT_Idx))


GLAPI void  APIENTRY glBinormal3ivEXT(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3ivEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3ivEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3ivEXT");
            if(!GL_ENTRY_PTR(glBinormal3ivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3ivEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3ivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3ivEXT_Idx) = get_ts();
        }


	

}