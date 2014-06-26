#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameteriNV_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glPointParameteriNV_Idx))


GLAPI void  APIENTRY glPointParameteriNV(GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameteriNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameteriNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameteriNV_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameteriNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameteriNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameteriNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameteriNV_Idx),
				 GL_ENTRY_LAST_TS(glPointParameteriNV_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameteriNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameteriNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameteriNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameteriNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameteriNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameteriNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameteriNV_Idx) = get_ts();
        }


	

}