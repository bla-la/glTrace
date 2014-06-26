#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectBufferfvATI_wrp						\
    ((void  (*)(GLuint buffer,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetObjectBufferfvATI_Idx))


GLAPI void  APIENTRY glGetObjectBufferfvATI(GLuint buffer,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetObjectBufferfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectBufferfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectBufferfvATI_wrp(buffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectBufferfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectBufferfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectBufferfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectBufferfvATI_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectBufferfvATI_Idx));


        if(last_diff > 1000000000){
            printf("glGetObjectBufferfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectBufferfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectBufferfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectBufferfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectBufferfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectBufferfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectBufferfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectBufferfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectBufferfvATI_Idx) = get_ts();
        }


	

}