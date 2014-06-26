#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenivOES_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTexGenivOES_Idx))


GLAPI void  APIENTRY glTexGenivOES(GLenum coord,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGenivOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenivOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenivOES_wrp(coord,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenivOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenivOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenivOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenivOES_Idx),
				 GL_ENTRY_LAST_TS(glTexGenivOES_Idx));


        if(last_diff > 1000000000){
            printf("glTexGenivOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenivOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenivOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenivOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenivOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenivOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenivOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenivOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenivOES_Idx) = get_ts();
        }


	

}