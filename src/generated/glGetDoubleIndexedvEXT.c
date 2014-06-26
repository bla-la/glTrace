#include <glTraceCommon.h>
#include <generated.h>

#define glGetDoubleIndexedvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLdouble *data                                        \
    ))GL_ENTRY_PTR(glGetDoubleIndexedvEXT_Idx))


GLAPI void  APIENTRY glGetDoubleIndexedvEXT(GLenum target,GLuint index,GLdouble *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetDoubleIndexedvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDoubleIndexedvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetDoubleIndexedvEXT_wrp(target,index,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDoubleIndexedvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDoubleIndexedvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDoubleIndexedvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDoubleIndexedvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetDoubleIndexedvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetDoubleIndexedvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDoubleIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoubleIndexedvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetDoubleIndexedvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDoubleIndexedvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDoubleIndexedvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDoubleIndexedvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDoubleIndexedvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDoubleIndexedvEXT_Idx) = get_ts();
        }


	

}