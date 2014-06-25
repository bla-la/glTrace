#include <glTraceCommon.h>
#include <generated.h>

#define glTexGeni_wrp						\
    ((void  (*)(GLenum coord,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glTexGeni_Idx))


GLAPI void  APIENTRY glTexGeni(GLenum coord,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexGeni_Idx))
	{
            GL_ENTRY_PTR(glTexGeni_Idx) = dlsym(RTLD_NEXT,"glTexGeni");
            if(!GL_ENTRY_PTR(glTexGeni_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexGeni_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexGeni_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexGeni_wrp(coord,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexGeni_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexGeni_Idx) ++;

        GL_ENTRY_LAST_TS(glTexGeni_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexGeni_Idx),
				 GL_ENTRY_LAST_TS(glTexGeni_Idx));
        if(last_diff > 1000000000){
            printf("glTexGeni %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexGeni_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeni_Idx),
	             GL_ENTRY_CALL_TIME(glTexGeni_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexGeni_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexGeni_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexGeni_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexGeni_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexGeni_Idx) = get_ts();
        }


	

}