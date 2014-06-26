#include <glTraceCommon.h>
#include <generated.h>

#define glTexGeniOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glTexGeniOES_Idx))


GLAPI void  APIENTRY glTexGeniOES(GLenum coord,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGeniOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGeniOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGeniOES_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGeniOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGeniOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGeniOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGeniOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGeniOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexGeniOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGeniOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeniOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeniOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGeniOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGeniOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGeniOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGeniOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGeniOES_Idx) = get_ts();
        }


	

}