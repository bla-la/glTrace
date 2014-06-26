#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfEXT_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPointParameterfEXT_Idx))


GLAPI void  APIENTRY glPointParameterfEXT(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfEXT_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfEXT_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfEXT_Idx) = get_ts();
        }


	

}