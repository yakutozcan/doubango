/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.8
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_tinyWRAP_WRAP_H_
#define SWIG_tinyWRAP_WRAP_H_

class SwigDirector_DDebugCallback : public DDebugCallback, public Swig::Director {

public:
    SwigDirector_DDebugCallback();
    virtual ~SwigDirector_DDebugCallback();
    virtual int OnDebugInfo(char const *message);
    virtual int OnDebugWarn(char const *message);
    virtual int OnDebugError(char const *message);
    virtual int OnDebugFatal(char const *message);

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(char *);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)(char *);
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)(char *);
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)(char *);
    void swig_connect_director(SWIG_Callback0_t callbackOnDebugInfo, SWIG_Callback1_t callbackOnDebugWarn, SWIG_Callback2_t callbackOnDebugError, SWIG_Callback3_t callbackOnDebugFatal);

private:
    SWIG_Callback0_t swig_callbackOnDebugInfo;
    SWIG_Callback1_t swig_callbackOnDebugWarn;
    SWIG_Callback2_t swig_callbackOnDebugError;
    SWIG_Callback3_t swig_callbackOnDebugFatal;
    void swig_init_callbacks();
};

class SwigDirector_T140Callback : public T140Callback, public Swig::Director {

public:
    SwigDirector_T140Callback();
    virtual ~SwigDirector_T140Callback();
    virtual int ondata(T140CallbackData const *pData);

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackondata);

private:
    SWIG_Callback0_t swig_callbackondata;
    void swig_init_callbacks();
};

class SwigDirector_ProxyPluginMgrCallback : public ProxyPluginMgrCallback, public Swig::Director {

public:
    SwigDirector_ProxyPluginMgrCallback();
    virtual ~SwigDirector_ProxyPluginMgrCallback();
    virtual int OnPluginCreated(uint64_t id, enum twrap_proxy_plugin_type_e type);
    virtual int OnPluginDestroyed(uint64_t id, enum twrap_proxy_plugin_type_e type);

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(unsigned long long, int);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)(unsigned long long, int);
    void swig_connect_director(SWIG_Callback0_t callbackOnPluginCreated, SWIG_Callback1_t callbackOnPluginDestroyed);

private:
    SWIG_Callback0_t swig_callbackOnPluginCreated;
    SWIG_Callback1_t swig_callbackOnPluginDestroyed;
    void swig_init_callbacks();
};

class SwigDirector_ProxyAudioConsumerCallback : public ProxyAudioConsumerCallback, public Swig::Director {

public:
    SwigDirector_ProxyAudioConsumerCallback();
    virtual ~SwigDirector_ProxyAudioConsumerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(int, int, int);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackprepare, SWIG_Callback1_t callbackstart, SWIG_Callback2_t callbackpause, SWIG_Callback3_t callbackstop);

private:
    SWIG_Callback0_t swig_callbackprepare;
    SWIG_Callback1_t swig_callbackstart;
    SWIG_Callback2_t swig_callbackpause;
    SWIG_Callback3_t swig_callbackstop;
    void swig_init_callbacks();
};

class SwigDirector_ProxyVideoConsumerCallback : public ProxyVideoConsumerCallback, public Swig::Director {

public:
    SwigDirector_ProxyVideoConsumerCallback();
    virtual ~SwigDirector_ProxyVideoConsumerCallback();
    virtual int prepare(int nWidth, int nHeight, int nFps);
    virtual int consume(ProxyVideoFrame const *frame);
    virtual int bufferCopied(unsigned int nCopiedSize, unsigned int nAvailableSize);
    virtual int start();
    virtual int pause();
    virtual int stop();

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(int, int, int);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)(unsigned int, unsigned int);
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback4_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback5_t)();
    void swig_connect_director(SWIG_Callback0_t callbackprepare, SWIG_Callback1_t callbackconsume, SWIG_Callback2_t callbackbufferCopied, SWIG_Callback3_t callbackstart, SWIG_Callback4_t callbackpause, SWIG_Callback5_t callbackstop);

private:
    SWIG_Callback0_t swig_callbackprepare;
    SWIG_Callback1_t swig_callbackconsume;
    SWIG_Callback2_t swig_callbackbufferCopied;
    SWIG_Callback3_t swig_callbackstart;
    SWIG_Callback4_t swig_callbackpause;
    SWIG_Callback5_t swig_callbackstop;
    void swig_init_callbacks();
};

class SwigDirector_ProxyAudioProducerCallback : public ProxyAudioProducerCallback, public Swig::Director {

public:
    SwigDirector_ProxyAudioProducerCallback();
    virtual ~SwigDirector_ProxyAudioProducerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();
    virtual int fillPushBuffer();

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(int, int, int);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback4_t)();
    void swig_connect_director(SWIG_Callback0_t callbackprepare, SWIG_Callback1_t callbackstart, SWIG_Callback2_t callbackpause, SWIG_Callback3_t callbackstop, SWIG_Callback4_t callbackfillPushBuffer);

private:
    SWIG_Callback0_t swig_callbackprepare;
    SWIG_Callback1_t swig_callbackstart;
    SWIG_Callback2_t swig_callbackpause;
    SWIG_Callback3_t swig_callbackstop;
    SWIG_Callback4_t swig_callbackfillPushBuffer;
    void swig_init_callbacks();
};

class SwigDirector_ProxyVideoProducerCallback : public ProxyVideoProducerCallback, public Swig::Director {

public:
    SwigDirector_ProxyVideoProducerCallback();
    virtual ~SwigDirector_ProxyVideoProducerCallback();
    virtual int prepare(int width, int height, int fps);
    virtual int start();
    virtual int pause();
    virtual int stop();

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(int, int, int);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackprepare, SWIG_Callback1_t callbackstart, SWIG_Callback2_t callbackpause, SWIG_Callback3_t callbackstop);

private:
    SWIG_Callback0_t swig_callbackprepare;
    SWIG_Callback1_t swig_callbackstart;
    SWIG_Callback2_t swig_callbackpause;
    SWIG_Callback3_t swig_callbackstop;
    void swig_init_callbacks();
};

class SwigDirector_SipCallback : public SipCallback, public Swig::Director {

public:
    SwigDirector_SipCallback();
    virtual ~SwigDirector_SipCallback();
    virtual int OnDialogEvent(DialogEvent const *e);
    virtual int OnStackEvent(StackEvent const *e);
    virtual int OnInviteEvent(InviteEvent const *e);
    virtual int OnMessagingEvent(MessagingEvent const *e);
    virtual int OnInfoEvent(InfoEvent const *e);
    virtual int OnOptionsEvent(OptionsEvent const *e);
    virtual int OnPublicationEvent(PublicationEvent const *e);
    virtual int OnRegistrationEvent(RegistrationEvent const *e);
    virtual int OnSubscriptionEvent(SubscriptionEvent const *e);

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback4_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback5_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback6_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback8_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnDialogEvent, SWIG_Callback1_t callbackOnStackEvent, SWIG_Callback2_t callbackOnInviteEvent, SWIG_Callback3_t callbackOnMessagingEvent, SWIG_Callback4_t callbackOnInfoEvent, SWIG_Callback5_t callbackOnOptionsEvent, SWIG_Callback6_t callbackOnPublicationEvent, SWIG_Callback7_t callbackOnRegistrationEvent, SWIG_Callback8_t callbackOnSubscriptionEvent);

private:
    SWIG_Callback0_t swig_callbackOnDialogEvent;
    SWIG_Callback1_t swig_callbackOnStackEvent;
    SWIG_Callback2_t swig_callbackOnInviteEvent;
    SWIG_Callback3_t swig_callbackOnMessagingEvent;
    SWIG_Callback4_t swig_callbackOnInfoEvent;
    SWIG_Callback5_t swig_callbackOnOptionsEvent;
    SWIG_Callback6_t swig_callbackOnPublicationEvent;
    SWIG_Callback7_t swig_callbackOnRegistrationEvent;
    SWIG_Callback8_t swig_callbackOnSubscriptionEvent;
    void swig_init_callbacks();
};

class SwigDirector_XcapCallback : public XcapCallback, public Swig::Director {

public:
    SwigDirector_XcapCallback();
    virtual ~SwigDirector_XcapCallback();
    virtual int onEvent(XcapEvent const *e) const;

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackonEvent);

private:
    SWIG_Callback0_t swig_callbackonEvent;
    void swig_init_callbacks();
};

class SwigDirector_MsrpCallback : public MsrpCallback, public Swig::Director {

public:
    SwigDirector_MsrpCallback();
    virtual ~SwigDirector_MsrpCallback();
    virtual int OnEvent(MsrpEvent const *e);

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnEvent);

private:
    SWIG_Callback0_t swig_callbackOnEvent;
    void swig_init_callbacks();
};


#endif
