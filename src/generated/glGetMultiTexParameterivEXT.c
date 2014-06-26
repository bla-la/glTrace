#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexParameterivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexParameterivEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexParameterivEXT(GLenum texunit,GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexParameterivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexParameterivEXT_Idx) = get_ts();
        }


	

}