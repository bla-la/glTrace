#include <glTraceCommon.h>
#include <generated.h>

#define glExtTexObjectStateOverrideiQCOM_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glExtTexObjectStateOverrideiQCOM_Idx))


GLAPI void  APIENTRY glExtTexObjectStateOverrideiQCOM(GLenum target,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtTexObjectStateOverrideiQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtTexObjectStateOverrideiQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtTexObjectStateOverrideiQCOM_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtTexObjectStateOverrideiQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtTexObjectStateOverrideiQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtTexObjectStateOverrideiQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtTexObjectStateOverrideiQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtTexObjectStateOverrideiQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtTexObjectStateOverrideiQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtTexObjectStateOverrideiQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtTexObjectStateOverrideiQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtTexObjectStateOverrideiQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtTexObjectStateOverrideiQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtTexObjectStateOverrideiQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtTexObjectStateOverrideiQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtTexObjectStateOverrideiQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtTexObjectStateOverrideiQCOM_Idx) = get_ts();
        }


	

}