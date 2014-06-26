#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterivNV_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glPointParameterivNV_Idx))


GLAPI void  APIENTRY glPointParameterivNV(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterivNV_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterivNV_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterivNV_Idx) = get_ts();
        }


	

}