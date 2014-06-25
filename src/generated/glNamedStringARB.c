#include <glTraceCommon.h>
#include <generated.h>

#define glNamedStringARB_wrp						\
    ((void  (*)(GLenum type,GLint namelen,const GLchar *name,GLint stringlen,const GLchar *string                                        \
    ))GL_ENTRY_PTR(glNamedStringARB_Idx))


GLAPI void  APIENTRY glNamedStringARB(GLenum type,GLint namelen,const GLchar *name,GLint stringlen,const GLchar *string)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedStringARB_Idx))
	{
            GL_ENTRY_PTR(glNamedStringARB_Idx) = dlsym(RTLD_NEXT,"glNamedStringARB");
            if(!GL_ENTRY_PTR(glNamedStringARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedStringARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedStringARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedStringARB_wrp(type,namelen,name,stringlen,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedStringARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedStringARB_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedStringARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedStringARB_Idx),
				 GL_ENTRY_LAST_TS(glNamedStringARB_Idx));
        if(last_diff > 1000000000){
            printf("glNamedStringARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glNamedStringARB_Idx),
	             GL_ENTRY_CALL_TIME(glNamedStringARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedStringARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedStringARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedStringARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedStringARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedStringARB_Idx) = get_ts();
        }


	

}