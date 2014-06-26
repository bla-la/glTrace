#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenfOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glTexGenfOES_Idx))


GLAPI void  APIENTRY glTexGenfOES(GLenum coord,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGenfOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenfOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenfOES_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenfOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenfOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenfOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenfOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGenfOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexGenfOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenfOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenfOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenfOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenfOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenfOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenfOES_Idx) = get_ts();
        }


	

}