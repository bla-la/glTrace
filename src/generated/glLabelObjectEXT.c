#include <glTraceCommon.h>
#include <generated.h>

#define glLabelObjectEXT_wrp						\
    ((void  (*)(GLenum type,GLuint object,GLsizei length,const GLchar *label                                        \
    ))GL_ENTRY_PTR(glLabelObjectEXT_Idx))


GLAPI void  APIENTRY glLabelObjectEXT(GLenum type,GLuint object,GLsizei length,const GLchar *label)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLabelObjectEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glLabelObjectEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLabelObjectEXT_wrp(type,object,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLabelObjectEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLabelObjectEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glLabelObjectEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLabelObjectEXT_Idx),
				 GL_ENTRY_LAST_TS(glLabelObjectEXT_Idx));


        if(last_diff > 1000000000){
            printf("glLabelObjectEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLabelObjectEXT_Idx),
	             GL_ENTRY_CALL_TIME(glLabelObjectEXT_Idx),
	             GL_ENTRY_CALL_TIME(glLabelObjectEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glLabelObjectEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLabelObjectEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLabelObjectEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLabelObjectEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLabelObjectEXT_Idx) = get_ts();
        }


	

}