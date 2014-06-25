#include <glTraceCommon.h>
#include <generated.h>

#define glTexStorageSparseAMD_wrp						\
    ((void  (*)(GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glTexStorageSparseAMD_Idx))


GLAPI void  APIENTRY glTexStorageSparseAMD(GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexStorageSparseAMD_Idx))
	{
            GL_ENTRY_PTR(glTexStorageSparseAMD_Idx) = dlsym(RTLD_NEXT,"glTexStorageSparseAMD");
            if(!GL_ENTRY_PTR(glTexStorageSparseAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexStorageSparseAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexStorageSparseAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexStorageSparseAMD_wrp(target,internalFormat,width,height,depth,layers,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexStorageSparseAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexStorageSparseAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glTexStorageSparseAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexStorageSparseAMD_Idx),
				 GL_ENTRY_LAST_TS(glTexStorageSparseAMD_Idx));
        if(last_diff > 1000000000){
            printf("glTexStorageSparseAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexStorageSparseAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorageSparseAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTexStorageSparseAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexStorageSparseAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexStorageSparseAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexStorageSparseAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexStorageSparseAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexStorageSparseAMD_Idx) = get_ts();
        }


	

}