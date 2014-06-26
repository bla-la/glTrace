#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3i_wrp						\
    ((void  (*)(GLenum target,GLint s,GLint t,GLint r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3i_Idx))


GLAPI void  APIENTRY glMultiTexCoord3i(GLenum target,GLint s,GLint t,GLint r)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3i_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3i_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3i_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3i_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3i_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord3i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3i_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3i_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3i_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3i_Idx) = get_ts();
        }


	

}