#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3iEXT_wrp						\
    ((void  (*)(GLint bx,GLint by,GLint bz                                        \
    ))GL_ENTRY_PTR(glBinormal3iEXT_Idx))


GLAPI void  APIENTRY glBinormal3iEXT(GLint bx,GLint by,GLint bz)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBinormal3iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3iEXT_wrp(bx,by,bz);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3iEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3iEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBinormal3iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3iEXT_Idx) = get_ts();
        }


	

}