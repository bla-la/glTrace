#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexGenfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexGenfvEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexGenfvEXT(GLenum texunit,GLenum coord,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexGenfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexGenfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexGenfvEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexGenfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexGenfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexGenfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexGenfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexGenfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexGenfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGenfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGenfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGenfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGenfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexGenfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexGenfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexGenfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexGenfvEXT_Idx) = get_ts();
        }


	

}