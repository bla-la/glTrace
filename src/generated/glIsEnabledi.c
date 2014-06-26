#include <glTraceCommon.h>
#include <generated.h>

#define glIsEnabledi_wrp						\
    ((GLboolean  (*)(GLenum target,GLuint index                                        \
    ))GL_ENTRY_PTR(glIsEnabledi_Idx))


GLAPI GLboolean  APIENTRY glIsEnabledi(GLenum target,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsEnabledi_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsEnabledi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsEnabledi_wrp(target,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsEnabledi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsEnabledi_Idx) ++;

        GL_ENTRY_LAST_TS(glIsEnabledi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsEnabledi_Idx),
				 GL_ENTRY_LAST_TS(glIsEnabledi_Idx));


        if(last_diff > 1000000000){
            printf("glIsEnabledi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsEnabledi_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabledi_Idx),
	             GL_ENTRY_CALL_TIME(glIsEnabledi_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsEnabledi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsEnabledi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsEnabledi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsEnabledi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsEnabledi_Idx) = get_ts();
        }


	return retval;

}