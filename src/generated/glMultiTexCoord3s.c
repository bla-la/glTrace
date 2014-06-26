#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord3s_wrp						\
    ((void  (*)(GLenum target,GLshort s,GLshort t,GLshort r                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord3s_Idx))


GLAPI void  APIENTRY glMultiTexCoord3s(GLenum target,GLshort s,GLshort t,GLshort r)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord3s_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord3s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord3s_wrp(target,s,t,r);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord3s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord3s_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord3s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord3s_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord3s_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord3s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord3s_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord3s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord3s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord3s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord3s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord3s_Idx) = get_ts();
        }


	

}