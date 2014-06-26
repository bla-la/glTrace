#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexParameterfEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glMultiTexParameterfEXT_Idx))


GLAPI void  APIENTRY glMultiTexParameterfEXT(GLenum texunit,GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexParameterfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexParameterfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexParameterfEXT_wrp(texunit,target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexParameterfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexParameterfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexParameterfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexParameterfEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexParameterfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexParameterfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexParameterfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexParameterfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexParameterfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexParameterfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexParameterfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexParameterfEXT_Idx) = get_ts();
        }


	

}