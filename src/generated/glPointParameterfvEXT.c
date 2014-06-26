#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfvEXT_wrp						\
    ((void  (*)(GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glPointParameterfvEXT_Idx))


GLAPI void  APIENTRY glPointParameterfvEXT(GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfvEXT_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfvEXT_Idx) = get_ts();
        }


	

}