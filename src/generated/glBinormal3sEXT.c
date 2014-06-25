#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3sEXT_wrp						\
    ((void  (*)(GLshort bx,GLshort by,GLshort bz                                        \
    ))GL_ENTRY_PTR(glBinormal3sEXT_Idx))


GLAPI void  APIENTRY glBinormal3sEXT(GLshort bx,GLshort by,GLshort bz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3sEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3sEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3sEXT");
            if(!GL_ENTRY_PTR(glBinormal3sEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3sEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3sEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3sEXT_wrp(bx,by,bz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3sEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3sEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3sEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3sEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3sEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3sEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3sEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3sEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3sEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3sEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3sEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3sEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3sEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3sEXT_Idx) = get_ts();
        }


	

}