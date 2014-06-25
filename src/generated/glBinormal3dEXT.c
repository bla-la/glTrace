#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3dEXT_wrp						\
    ((void  (*)(GLdouble bx,GLdouble by,GLdouble bz                                        \
    ))GL_ENTRY_PTR(glBinormal3dEXT_Idx))


GLAPI void  APIENTRY glBinormal3dEXT(GLdouble bx,GLdouble by,GLdouble bz)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBinormal3dEXT_Idx))
	{
            GL_ENTRY_PTR(glBinormal3dEXT_Idx) = dlsym(RTLD_NEXT,"glBinormal3dEXT");
            if(!GL_ENTRY_PTR(glBinormal3dEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBinormal3dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3dEXT_wrp(bx,by,bz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3dEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3dEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBinormal3dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3dEXT_Idx) = get_ts();
        }


	

}