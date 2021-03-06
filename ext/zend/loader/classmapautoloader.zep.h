
extern zend_class_entry *zend_loader_classmapautoloader_ce;

ZEPHIR_INIT_CLASS(Zend_Loader_ClassMapAutoloader);

PHP_METHOD(Zend_Loader_ClassMapAutoloader, __construct);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, setOptions);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, registerAutoloadMap);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, registerAutoloadMaps);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, getAutoloadMap);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, autoload);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, register);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, loadMapFromFile);
PHP_METHOD(Zend_Loader_ClassMapAutoloader, realPharPath);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_setoptions, 0, 0, 1)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_registerautoloadmap, 0, 0, 1)
	ZEND_ARG_INFO(0, map)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_registerautoloadmaps, 0, 0, 1)
	ZEND_ARG_INFO(0, locations)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_autoload, 0, 0, 1)
	ZEND_ARG_INFO(0, class)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_loadmapfromfile, 0, 0, 1)
	ZEND_ARG_INFO(0, location)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zend_loader_classmapautoloader_realpharpath, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zend_loader_classmapautoloader_method_entry) {
	PHP_ME(Zend_Loader_ClassMapAutoloader, __construct, arginfo_zend_loader_classmapautoloader___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Zend_Loader_ClassMapAutoloader, setOptions, arginfo_zend_loader_classmapautoloader_setoptions, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, registerAutoloadMap, arginfo_zend_loader_classmapautoloader_registerautoloadmap, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, registerAutoloadMaps, arginfo_zend_loader_classmapautoloader_registerautoloadmaps, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, getAutoloadMap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, autoload, arginfo_zend_loader_classmapautoloader_autoload, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, register, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Zend_Loader_ClassMapAutoloader, loadMapFromFile, arginfo_zend_loader_classmapautoloader_loadmapfromfile, ZEND_ACC_PROTECTED)
	PHP_ME(Zend_Loader_ClassMapAutoloader, realPharPath, arginfo_zend_loader_classmapautoloader_realpharpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
  PHP_FE_END
};
