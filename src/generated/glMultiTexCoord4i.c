#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4i_wrp						\
    ((void  (*)(GLenum target,GLint s,GLint t,GLint r,GLint q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4i_Idx))


GLAPI void  APIENTRY glMultiTexCoord4i(GLenum target,GLint s,GLint t,GLint r,GLint q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4i_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4i_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4i_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4i_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4i_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4i_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4i_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4i_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4i_Idx) = get_ts();
        }


	

}