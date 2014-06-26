#include <glTraceCommon.h>
#include <generated.h>

#define glTexGenf_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glTexGenf_Idx))


GLAPI void  APIENTRY glTexGenf(GLenum coord,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexGenf_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGenf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGenf_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGenf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGenf_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGenf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGenf_Idx),
				 GL_ENTRY_LAST_TS(glTexGenf_Idx));


        if(last_diff > 1000000000){
            printf("glTexGenf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGenf_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenf_Idx),
	             GL_ENTRY_CALL_TIME(glTexGenf_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGenf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGenf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGenf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGenf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGenf_Idx) = get_ts();
        }


	

}