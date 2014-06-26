#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4s_wrp						\
    ((void  (*)(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4s_Idx))


GLAPI void  APIENTRY glMultiTexCoord4s(GLenum target,GLshort s,GLshort t,GLshort r,GLshort q)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4s_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4s_wrp(target,s,t,r,q);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4s_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4s_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4s_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4s_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4s_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4s_Idx) = get_ts();
        }


	

}