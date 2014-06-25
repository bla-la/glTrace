#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3bvEXT_wrp						\
    ((void  (*)(const GLbyte *v                                        \
    ))GL_ENTRY_PTR(glBinormal3bvEXT_Idx))


GLAPI void  APIENTRY glBinormal3bvEXT(const GLbyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3bvEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3bvEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3bvEXT");
            if(!GL_ENTRY_PTR(glBinormal3bvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3bvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3bvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3bvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3bvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3bvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3bvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3bvEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3bvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3bvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3bvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3bvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3bvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3bvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3bvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3bvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3bvEXT_Idx) = get_ts();
        }


	

}