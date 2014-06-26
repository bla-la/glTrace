#include <glTraceCommon.h>
#include <generated.h>

#define glVariantusvEXT_wrp						\
    ((void  (*)(GLuint id,const GLushort *addr                                        \
    ))GL_ENTRY_PTR(glVariantusvEXT_Idx))


GLAPI void  APIENTRY glVariantusvEXT(GLuint id,const GLushort *addr)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVariantusvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVariantusvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVariantusvEXT_wrp(id,addr);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVariantusvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVariantusvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVariantusvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVariantusvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVariantusvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVariantusvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVariantusvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantusvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVariantusvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVariantusvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVariantusvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVariantusvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVariantusvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVariantusvEXT_Idx) = get_ts();
        }


	

}