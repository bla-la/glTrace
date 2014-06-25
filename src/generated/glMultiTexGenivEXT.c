#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGenivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMultiTexGenivEXT_Idx))


GLAPI void  APIENTRY glMultiTexGenivEXT(GLenum texunit,GLenum coord,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexGenivEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexGenivEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexGenivEXT");
            if(!GL_ENTRY_PTR(glMultiTexGenivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexGenivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGenivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGenivEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGenivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGenivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGenivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGenivEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGenivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexGenivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGenivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGenivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGenivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGenivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGenivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGenivEXT_Idx) = get_ts();
        }


	

}