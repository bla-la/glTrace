#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGenfvEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glMultiTexGenfvEXT_Idx))


GLAPI void  APIENTRY glMultiTexGenfvEXT(GLenum texunit,GLenum coord,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexGenfvEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexGenfvEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexGenfvEXT");
            if(!GL_ENTRY_PTR(glMultiTexGenfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexGenfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGenfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGenfvEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGenfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGenfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGenfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGenfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGenfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexGenfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGenfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGenfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGenfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGenfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGenfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGenfvEXT_Idx) = get_ts();
        }


	

}