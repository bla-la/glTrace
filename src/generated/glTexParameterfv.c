#include <glTraceCommon.h>
#include <generated.h>

#define glTexParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glTexParameterfv_Idx))


GLAPI void  APIENTRY glTexParameterfv(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glTexParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glTexParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glTexParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexParameterfv_Idx) = get_ts();
        }


	

}