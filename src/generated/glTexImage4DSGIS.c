#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage4DSGIS_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexImage4DSGIS_Idx))


GLAPI void  APIENTRY glTexImage4DSGIS(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexImage4DSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage4DSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage4DSGIS_wrp(target,level,internalformat,width,height,depth,size4d,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage4DSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage4DSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage4DSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage4DSGIS_Idx),
				 GL_ENTRY_LAST_TS(glTexImage4DSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glTexImage4DSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage4DSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage4DSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage4DSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage4DSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage4DSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage4DSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage4DSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage4DSGIS_Idx) = get_ts();
        }


	

}