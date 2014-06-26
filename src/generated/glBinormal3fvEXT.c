#include <glTraceCommon.h>
#include <generated.h>

#define glBinormal3fvEXT_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glBinormal3fvEXT_Idx))


GLAPI void  APIENTRY glBinormal3fvEXT(const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBinormal3fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBinormal3fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBinormal3fvEXT_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBinormal3fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBinormal3fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBinormal3fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBinormal3fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glBinormal3fvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBinormal3fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBinormal3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBinormal3fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBinormal3fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBinormal3fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBinormal3fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBinormal3fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBinormal3fvEXT_Idx) = get_ts();
        }


	

}