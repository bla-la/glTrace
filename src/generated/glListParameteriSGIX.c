#include <glTraceCommon.h>
#include <generated.h>

#define glListParameteriSGIX_wrp						\
    ((void  (*)(GLuint list,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glListParameteriSGIX_Idx))


GLAPI void  APIENTRY glListParameteriSGIX(GLuint list,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glListParameteriSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glListParameteriSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glListParameteriSGIX_wrp(list,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glListParameteriSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glListParameteriSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glListParameteriSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glListParameteriSGIX_Idx),
				 GL_ENTRY_LAST_TS(glListParameteriSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glListParameteriSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glListParameteriSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameteriSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glListParameteriSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glListParameteriSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glListParameteriSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glListParameteriSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glListParameteriSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glListParameteriSGIX_Idx) = get_ts();
        }


	

}