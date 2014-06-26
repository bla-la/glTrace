#include <glTraceCommon.h>
#include <generated.h>

#define glExtractComponentEXT_wrp						\
    ((void  (*)(GLuint res,GLuint src,GLuint num                                        \
    ))GL_ENTRY_PTR(glExtractComponentEXT_Idx))


GLAPI void  APIENTRY glExtractComponentEXT(GLuint res,GLuint src,GLuint num)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtractComponentEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtractComponentEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtractComponentEXT_wrp(res,src,num);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtractComponentEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtractComponentEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glExtractComponentEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtractComponentEXT_Idx),
				 GL_ENTRY_LAST_TS(glExtractComponentEXT_Idx));


        if(last_diff > 1000000000){
            printf("glExtractComponentEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtractComponentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glExtractComponentEXT_Idx),
	             GL_ENTRY_CALL_TIME(glExtractComponentEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtractComponentEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtractComponentEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtractComponentEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtractComponentEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtractComponentEXT_Idx) = get_ts();
        }


	

}