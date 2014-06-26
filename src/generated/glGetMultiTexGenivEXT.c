#include <glTraceCommon.h>
#include <generated.h>

#define glGetMultiTexGenivEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMultiTexGenivEXT_Idx))


GLAPI void  APIENTRY glGetMultiTexGenivEXT(GLenum texunit,GLenum coord,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetMultiTexGenivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMultiTexGenivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMultiTexGenivEXT_wrp(texunit,coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMultiTexGenivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMultiTexGenivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMultiTexGenivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMultiTexGenivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetMultiTexGenivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetMultiTexGenivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGenivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGenivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetMultiTexGenivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMultiTexGenivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMultiTexGenivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMultiTexGenivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMultiTexGenivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMultiTexGenivEXT_Idx) = get_ts();
        }


	

}