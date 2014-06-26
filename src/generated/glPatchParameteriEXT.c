#include <glTraceCommon.h>
#include <generated.h>

#define glPatchParameteriEXT_wrp						\
    ((void  (*)(GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glPatchParameteriEXT_Idx))


GLAPI void  APIENTRY glPatchParameteriEXT(GLenum pname,GLint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPatchParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPatchParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPatchParameteriEXT_wrp(pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPatchParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPatchParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPatchParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPatchParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glPatchParameteriEXT_Idx));


        if(last_diff > 1000000000){
            printf("glPatchParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPatchParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPatchParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPatchParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPatchParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPatchParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPatchParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPatchParameteriEXT_Idx) = get_ts();
        }


	

}