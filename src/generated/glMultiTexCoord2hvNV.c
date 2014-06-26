#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexCoord2hvNV_wrp						\
    ((void  (*)(GLenum target,const GLhalfNV *v                                        \
    ))GL_ENTRY_PTR(glMultiTexCoord2hvNV_Idx))


GLAPI void  APIENTRY glMultiTexCoord2hvNV(GLenum target,const GLhalfNV *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexCoord2hvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexCoord2hvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexCoord2hvNV_wrp(target,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexCoord2hvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexCoord2hvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexCoord2hvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexCoord2hvNV_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexCoord2hvNV_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexCoord2hvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2hvNV_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexCoord2hvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexCoord2hvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexCoord2hvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexCoord2hvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexCoord2hvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexCoord2hvNV_Idx) = get_ts();
        }


	

}