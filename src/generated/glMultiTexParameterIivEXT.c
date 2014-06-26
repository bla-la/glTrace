#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexParameterIivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMultiTexParameterIivEXT_Idx))


GLAPI void  APIENTRY glMultiTexParameterIivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexParameterIivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexParameterIivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexParameterIivEXT_Idx) = get_ts();
        }


	

}