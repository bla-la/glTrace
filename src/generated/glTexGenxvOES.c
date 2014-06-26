#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenxvOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glTexGenxvOES_Idx))


GLAPI void  APIENTRY glTexGenxvOES(GLenum coord,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGenxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenxvOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenxvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGenxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexGenxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenxvOES_Idx) = get_ts();
        }


	

}