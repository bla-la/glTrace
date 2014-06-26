#include <glTraceCommon.h>
#include <generated.h>

#define glVariantuivEXT_wrp						\
    ((void  (*)(GLuint id,const GLuint *addr                                        \
    ))GL_ENTRY_PTR(glVariantuivEXT_Idx))


GLAPI void  APIENTRY glVariantuivEXT(GLuint id,const GLuint *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantuivEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVariantuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantuivEXT_Idx) = get_ts();
        }


	

}