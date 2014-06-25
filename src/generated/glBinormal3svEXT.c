#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3svEXT_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glBinormal3svEXT_Idx))


GLAPI void  APIENTRY glBinormal3svEXT(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3svEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3svEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3svEXT");
            if(!GL_ENTRY_PTR(glBinormal3svEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3svEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3svEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3svEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3svEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3svEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3svEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3svEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3svEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3svEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3svEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3svEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3svEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3svEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3svEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3svEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3svEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3svEXT_Idx) = get_ts();
        }


	

}