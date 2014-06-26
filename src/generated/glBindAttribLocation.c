#include <glTraceCommon.h>
#include <generated.h>

#define glBindAttribLocation_wrp						\
    ((void  (*)(GLuint program,GLuint index,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glBindAttribLocation_Idx))


GLAPI void  APIENTRY glBindAttribLocation(GLuint program,GLuint index,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindAttribLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindAttribLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindAttribLocation_wrp(program,index,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindAttribLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindAttribLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glBindAttribLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindAttribLocation_Idx),
				 GL_ENTRY_LAST_TS(glBindAttribLocation_Idx));


        if(last_diff > 1000000000){
            printf("glBindAttribLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindAttribLocation_Idx),
	             GL_ENTRY_CALL_TIME(glBindAttribLocation_Idx),
	             GL_ENTRY_CALL_TIME(glBindAttribLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindAttribLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindAttribLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindAttribLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindAttribLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindAttribLocation_Idx) = get_ts();
        }


	

}