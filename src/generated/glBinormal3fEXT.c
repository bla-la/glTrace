#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3fEXT_wrp						\
    ((void  (*)(GLfloat bx,GLfloat by,GLfloat bz                                        \
    ))GL_ENTRY_PTR(glBinormal3fEXT_Idx))


GLAPI void  APIENTRY glBinormal3fEXT(GLfloat bx,GLfloat by,GLfloat bz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3fEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3fEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3fEXT");
            if(!GL_ENTRY_PTR(glBinormal3fEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3fEXT_wrp(bx,by,bz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3fEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3fEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3fEXT_Idx) = get_ts();
        }


	

}