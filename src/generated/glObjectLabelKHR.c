#include <glTraceCommon.h>
#include <generated.h>

#define glObjectLabelKHR_wrp						\
    ((void  (*)(GLenum identifier,GLuint name,GLsizei length,const GLchar *label                                        \
    ))GL_ENTRY_PTR(glObjectLabelKHR_Idx))


GLAPI void  APIENTRY glObjectLabelKHR(GLenum identifier,GLuint name,GLsizei length,const GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glObjectLabelKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glObjectLabelKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glObjectLabelKHR_wrp(identifier,name,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glObjectLabelKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glObjectLabelKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glObjectLabelKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glObjectLabelKHR_Idx),
				 GL_ENTRY_LAST_TS(glObjectLabelKHR_Idx));


        if(last_diff > 1000000000){
            printf("glObjectLabelKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glObjectLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glObjectLabelKHR_Idx),
	             GL_ENTRY_CALL_TIME(glObjectLabelKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glObjectLabelKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glObjectLabelKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glObjectLabelKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glObjectLabelKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glObjectLabelKHR_Idx) = get_ts();
        }


	

}