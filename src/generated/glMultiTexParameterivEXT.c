#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexParameterivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMultiTexParameterivEXT_Idx))


GLAPI void  APIENTRY glMultiTexParameterivEXT(GLenum texunit,GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexParameterivEXT");
            if(!GL_ENTRY_PTR(glMultiTexParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexParameterivEXT_wrp(texunit,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexParameterivEXT_Idx) = get_ts();
        }


	

}