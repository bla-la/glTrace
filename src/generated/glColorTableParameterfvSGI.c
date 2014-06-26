#include <glTraceCommon.h>
#include <generated.h>

#define glColorTableParameterfvSGI_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glColorTableParameterfvSGI_Idx))


GLAPI void  APIENTRY glColorTableParameterfvSGI(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glColorTableParameterfvSGI_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorTableParameterfvSGI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorTableParameterfvSGI_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorTableParameterfvSGI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorTableParameterfvSGI_Idx) ++;

        GL_ENTRY_LAST_TS(glColorTableParameterfvSGI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorTableParameterfvSGI_Idx),
				 GL_ENTRY_LAST_TS(glColorTableParameterfvSGI_Idx));


        if(last_diff > 1000000000){
            printf("glColorTableParameterfvSGI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorTableParameterfvSGI_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameterfvSGI_Idx),
	             GL_ENTRY_CALL_TIME(glColorTableParameterfvSGI_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorTableParameterfvSGI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorTableParameterfvSGI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorTableParameterfvSGI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorTableParameterfvSGI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorTableParameterfvSGI_Idx) = get_ts();
        }


	

}