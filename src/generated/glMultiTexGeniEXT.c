#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGeniEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glMultiTexGeniEXT_Idx))


GLAPI void  APIENTRY glMultiTexGeniEXT(GLenum texunit,GLenum coord,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexGeniEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGeniEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGeniEXT_wrp(texunit,coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGeniEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGeniEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGeniEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGeniEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGeniEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexGeniEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGeniEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGeniEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGeniEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGeniEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGeniEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGeniEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGeniEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGeniEXT_Idx) = get_ts();
        }


	

}