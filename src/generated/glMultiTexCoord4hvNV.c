#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord4hvNV_wrp						\
    ((void  (*)(GLenum target,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord4hvNV_Idx))


GLAPI void  APIENTRY glMultiTexCoord4hvNV(GLenum target,const GLhalfNV *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord4hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord4hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord4hvNV_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord4hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord4hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord4hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord4hvNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord4hvNV_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord4hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord4hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord4hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord4hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord4hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord4hvNV_Idx) = get_ts();
        }


	

}