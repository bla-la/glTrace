#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenfvOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glTexGenfvOES_Idx))


GLAPI void  APIENTRY glTexGenfvOES(GLenum coord,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGenfvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenfvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenfvOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenfvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenfvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenfvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenfvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGenfvOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexGenfvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenfvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenfvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenfvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenfvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenfvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenfvOES_Idx) = get_ts();
        }


	

}