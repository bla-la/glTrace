#include <glTraceCommon.h>
#include <generated.h>

#define glEnableiEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableiEXT_Idx))


GLAPI void  APIENTRY glEnableiEXT(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableiEXT_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableiEXT_Idx),
				 GL_ENTRY_LAST_TS(glEnableiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glEnableiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glEnableiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableiEXT_Idx) = get_ts();
        }


	

}