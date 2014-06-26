#include <glTraceCommon.h>
#include <generated.h>

#define glBindFragDataLocationIndexed_wrp						\
    ((void  (*)(GLuint program,GLuint colorNumber,GLuint index,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glBindFragDataLocationIndexed_Idx))


GLAPI void  APIENTRY glBindFragDataLocationIndexed(GLuint program,GLuint colorNumber,GLuint index,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFragDataLocationIndexed_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFragDataLocationIndexed_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFragDataLocationIndexed_wrp(program,colorNumber,index,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFragDataLocationIndexed_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFragDataLocationIndexed_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFragDataLocationIndexed_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFragDataLocationIndexed_Idx),
				 GL_ENTRY_LAST_TS(glBindFragDataLocationIndexed_Idx));


        if(last_diff > 1000000000){
            printf("glBindFragDataLocationIndexed %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocationIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocationIndexed_Idx),
	             GL_ENTRY_CALL_TIME(glBindFragDataLocationIndexed_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFragDataLocationIndexed_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFragDataLocationIndexed_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFragDataLocationIndexed_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFragDataLocationIndexed_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFragDataLocationIndexed_Idx) = get_ts();
        }


	

}