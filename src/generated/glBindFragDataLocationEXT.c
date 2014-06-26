#include <glTraceCommon.h>
#include <generated.h>

#define glBindFragDataLocationEXT_wrp						\
    ((void  (*)(GLuint program,GLuint color,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glBindFragDataLocationEXT_Idx))


GLAPI void  APIENTRY glBindFragDataLocationEXT(GLuint program,GLuint color,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFragDataLocationEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFragDataLocationEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFragDataLocationEXT_wrp(program,color,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFragDataLocationEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFragDataLocationEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFragDataLocationEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFragDataLocationEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindFragDataLocationEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBindFragDataLocationEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocationEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocationEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFragDataLocationEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFragDataLocationEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFragDataLocationEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFragDataLocationEXT_Idx) = get_ts();
        }


	

}