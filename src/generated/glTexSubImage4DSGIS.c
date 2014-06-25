#include <glTraceCommon.h>
#include <generated.h>

#define glTexSubImage4DSGIS_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint woffset,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexSubImage4DSGIS_Idx))


GLAPI void  APIENTRY glTexSubImage4DSGIS(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint woffset,GLsizei width,GLsizei height,GLsizei depth,GLsizei size4d,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexSubImage4DSGIS_Idx))
	{
            GL_ENTRY_PTR(glTexSubImage4DSGIS_Idx) = dlsym(RTLD_NEXT,"glTexSubImage4DSGIS");
            if(!GL_ENTRY_PTR(glTexSubImage4DSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexSubImage4DSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexSubImage4DSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexSubImage4DSGIS_wrp(target,level,xoffset,yoffset,zoffset,woffset,width,height,depth,size4d,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexSubImage4DSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexSubImage4DSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glTexSubImage4DSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexSubImage4DSGIS_Idx),
				 GL_ENTRY_LAST_TS(glTexSubImage4DSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glTexSubImage4DSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexSubImage4DSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage4DSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage4DSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexSubImage4DSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexSubImage4DSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexSubImage4DSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexSubImage4DSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexSubImage4DSGIS_Idx) = get_ts();
        }


	

}