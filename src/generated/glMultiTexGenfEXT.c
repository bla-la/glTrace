#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexGenfEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum coord,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glMultiTexGenfEXT_Idx))


GLAPI void  APIENTRY glMultiTexGenfEXT(GLenum texunit,GLenum coord,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexGenfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexGenfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexGenfEXT_wrp(texunit,coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexGenfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexGenfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexGenfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexGenfEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexGenfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexGenfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexGenfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexGenfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexGenfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexGenfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexGenfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexGenfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexGenfEXT_Idx) = get_ts();
        }


	

}