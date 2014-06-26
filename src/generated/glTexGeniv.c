#include <glTraceCommon.h>
#include <generated.h>

#define glTexGeniv_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTexGeniv_Idx))


GLAPI void  APIENTRY glTexGeniv(GLenum coord,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGeniv_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGeniv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGeniv_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGeniv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGeniv_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGeniv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGeniv_Idx),
				 GL_ENTRY_LAST_TS(glTexGeniv_Idx));


        if(last_diff > 1000000000){
            printf("glTexGeniv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGeniv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeniv_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeniv_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGeniv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGeniv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGeniv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGeniv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGeniv_Idx) = get_ts();
        }


	

}