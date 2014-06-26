#include <glTraceCommon.h>
#include <generated.h>

#define glMapParameterivNV_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glMapParameterivNV_Idx))


GLAPI void  APIENTRY glMapParameterivNV(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapParameterivNV_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMapParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glMapParameterivNV_Idx));


        if(last_diff > 1000000000){
            printf("glMapParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glMapParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapParameterivNV_Idx) = get_ts();
        }


	

}