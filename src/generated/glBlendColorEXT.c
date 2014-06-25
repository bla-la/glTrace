#include <glTraceCommon.h>
#include <generated.h>

#define glBlendColorEXT_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha                                        \
    ))GL_ENTRY_PTR(glBlendColorEXT_Idx))


GLAPI void  APIENTRY glBlendColorEXT(GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendColorEXT_Idx))
	{
            GL_ENTRY_PTR(glBlendColorEXT_Idx) = dlsym(RTLD_NEXT,"glBlendColorEXT");
            if(!GL_ENTRY_PTR(glBlendColorEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendColorEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendColorEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendColorEXT_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendColorEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendColorEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendColorEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendColorEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendColorEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBlendColorEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendColorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendColorEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendColorEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendColorEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendColorEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendColorEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendColorEXT_Idx) = get_ts();
        }


	

}