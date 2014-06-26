#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexEnviEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glMultiTexEnviEXT_Idx))


GLAPI void  APIENTRY glMultiTexEnviEXT(GLenum texunit,GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexEnviEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexEnviEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexEnviEXT_wrp(texunit,target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexEnviEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexEnviEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexEnviEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexEnviEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexEnviEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexEnviEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexEnviEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnviEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexEnviEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexEnviEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexEnviEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexEnviEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexEnviEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexEnviEXT_Idx) = get_ts();
        }


	

}