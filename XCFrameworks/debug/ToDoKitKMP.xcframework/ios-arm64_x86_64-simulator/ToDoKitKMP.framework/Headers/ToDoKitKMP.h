#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TDKKMPKoin_coreBeanDefinition<T>, TDKKMPKoin_coreCallbacks<T>, TDKKMPKoin_coreExtensionManager, TDKKMPKoin_coreInstanceFactory<T>, TDKKMPKoin_coreInstanceFactoryCompanion, TDKKMPKoin_coreInstanceRegistry, TDKKMPKoin_coreKind, TDKKMPKoin_coreKoin, TDKKMPKoin_coreKoinDefinition<R>, TDKKMPKoin_coreLevel, TDKKMPKoin_coreLockable, TDKKMPKoin_coreLogger, TDKKMPKoin_coreModule, TDKKMPKoin_coreParametersHolder, TDKKMPKoin_corePropertyRegistry, TDKKMPKoin_coreResolutionContext, TDKKMPKoin_coreScope, TDKKMPKoin_coreScopeDSL, TDKKMPKoin_coreScopeRegistry, TDKKMPKoin_coreScopeRegistryCompanion, TDKKMPKoin_coreSingleInstanceFactory<T>, TDKKMPKotlinArray<T>, TDKKMPKotlinByteArray, TDKKMPKotlinByteIterator, TDKKMPKotlinEnum<E>, TDKKMPKotlinEnumCompanion, TDKKMPKotlinException, TDKKMPKotlinIllegalStateException, TDKKMPKotlinLazyThreadSafetyMode, TDKKMPKotlinRuntimeException, TDKKMPKotlinThrowable, TDKKMPKotlinUnit, TDKKMPRuntimeAfterVersion, TDKKMPRuntimeBaseTransacterImpl, TDKKMPRuntimeExecutableQuery<__covariant RowType>, TDKKMPRuntimeQuery<__covariant RowType>, TDKKMPRuntimeTransacterImpl, TDKKMPRuntimeTransacterTransaction, TDKKMPTask, TDKKMPTaskDataBaseCompanion, TDKKMPTaskDataBaseQueries, TDKKMPTaskModel, TDKKMPTaskStatusEnum, TDKKMPTaskStatusEnumCompanion, TDKKMPTask_, TDKKMPUseCase<T, __contravariant Params>;

@protocol TDKKMPDatabaseDriverFactoryInterface, TDKKMPKoin_coreKoinComponent, TDKKMPKoin_coreKoinExtension, TDKKMPKoin_coreKoinScopeComponent, TDKKMPKoin_coreQualifier, TDKKMPKoin_coreScopeCallback, TDKKMPKotlinComparable, TDKKMPKotlinCoroutineContext, TDKKMPKotlinCoroutineContextElement, TDKKMPKotlinCoroutineContextKey, TDKKMPKotlinIterator, TDKKMPKotlinKAnnotatedElement, TDKKMPKotlinKClass, TDKKMPKotlinKClassifier, TDKKMPKotlinKDeclarationContainer, TDKKMPKotlinLazy, TDKKMPKotlinx_coroutines_coreCoroutineScope, TDKKMPKotlinx_coroutines_coreFlow, TDKKMPKotlinx_coroutines_coreFlowCollector, TDKKMPRuntimeCloseable, TDKKMPRuntimeQueryListener, TDKKMPRuntimeQueryResult, TDKKMPRuntimeSqlCursor, TDKKMPRuntimeSqlDriver, TDKKMPRuntimeSqlPreparedStatement, TDKKMPRuntimeSqlSchema, TDKKMPRuntimeTransacter, TDKKMPRuntimeTransacterBase, TDKKMPRuntimeTransactionCallbacks, TDKKMPRuntimeTransactionWithReturn, TDKKMPRuntimeTransactionWithoutReturn, TDKKMPTaskDataBase, TDKKMPTaskDataSourceInterface, TDKKMPTaskRepositoryInterface;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TDKKMPBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface TDKKMPBase (TDKKMPBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface TDKKMPMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TDKKMPMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTDKKMPKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface TDKKMPNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface TDKKMPByte : TDKKMPNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface TDKKMPUByte : TDKKMPNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface TDKKMPShort : TDKKMPNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface TDKKMPUShort : TDKKMPNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface TDKKMPInt : TDKKMPNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface TDKKMPUInt : TDKKMPNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface TDKKMPLong : TDKKMPNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface TDKKMPULong : TDKKMPNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface TDKKMPFloat : TDKKMPNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface TDKKMPDouble : TDKKMPNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface TDKKMPBoolean : TDKKMPNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Task")))
@interface TDKKMPTask : TDKKMPBase
- (instancetype)initWithId:(int64_t)id title:(NSString *)title description:(NSString *)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:title:description:status:createdAt:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPTask *)doCopyId:(int64_t)id title:(NSString *)title description:(NSString *)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:title:description:status:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol TDKKMPRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol TDKKMPRuntimeTransacter <TDKKMPRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<TDKKMPRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<TDKKMPRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("TaskDataBase")))
@protocol TDKKMPTaskDataBase <TDKKMPRuntimeTransacter>
@required
@property (readonly) TDKKMPTaskDataBaseQueries *taskDataBaseQueries __attribute__((swift_name("taskDataBaseQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskDataBaseCompanion")))
@interface TDKKMPTaskDataBaseCompanion : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPTaskDataBaseCompanion *shared __attribute__((swift_name("shared")));
- (id<TDKKMPTaskDataBase>)invokeDriver:(id<TDKKMPRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<TDKKMPRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface TDKKMPRuntimeBaseTransacterImpl : TDKKMPBase
- (instancetype)initWithDriver:(id<TDKKMPRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(TDKKMPKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(TDKKMPRuntimeTransacterTransaction *)transaction enclosing:(TDKKMPRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(TDKKMPKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<TDKKMPRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface TDKKMPRuntimeTransacterImpl : TDKKMPRuntimeBaseTransacterImpl <TDKKMPRuntimeTransacter>
- (instancetype)initWithDriver:(id<TDKKMPRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<TDKKMPRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<TDKKMPRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskDataBaseQueries")))
@interface TDKKMPTaskDataBaseQueries : TDKKMPRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<TDKKMPRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteTaskId:(int64_t)id __attribute__((swift_name("deleteTask(id:)")));
- (void)insertTaskTitle:(NSString *)title description:(NSString *)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("insertTask(title:description:status:createdAt:)")));
- (TDKKMPRuntimeQuery<TDKKMPTask *> *)readAllTasks __attribute__((swift_name("readAllTasks()")));
- (TDKKMPRuntimeQuery<id> *)readAllTasksMapper:(id (^)(TDKKMPLong *, NSString *, NSString *, TDKKMPLong *, TDKKMPLong *))mapper __attribute__((swift_name("readAllTasks(mapper:)")));
- (TDKKMPRuntimeQuery<TDKKMPTask *> *)readTaskByIdId:(int64_t)id __attribute__((swift_name("readTaskById(id:)")));
- (TDKKMPRuntimeQuery<id> *)readTaskByIdId:(int64_t)id mapper:(id (^)(TDKKMPLong *, NSString *, NSString *, TDKKMPLong *, TDKKMPLong *))mapper __attribute__((swift_name("readTaskById(id:mapper:)")));
- (void)updateTaskTitle:(NSString *)title description:(NSString *)description status:(int64_t)status id:(int64_t)id __attribute__((swift_name("updateTask(title:description:status:id:)")));
@end

__attribute__((swift_name("TaskDataSourceInterface")))
@protocol TDKKMPTaskDataSourceInterface
@required
- (id<TDKKMPKotlinx_coroutines_coreFlow>)deleteTaskTaskId:(int64_t)taskId __attribute__((swift_name("deleteTask(taskId:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)getTasks __attribute__((swift_name("getTasks()")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)saveTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("saveTask(task:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)updateTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("updateTask(task:)")));
@end

__attribute__((swift_name("TaskRepositoryInterface")))
@protocol TDKKMPTaskRepositoryInterface
@required
- (id<TDKKMPKotlinx_coroutines_coreFlow>)addTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("addTask(task:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)deleteTaskTaskId:(int64_t)taskId __attribute__((swift_name("deleteTask(taskId:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)getAllTasks __attribute__((swift_name("getAllTasks()")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)updateTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("updateTask(task:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskRepositoryImpl")))
@interface TDKKMPTaskRepositoryImpl : TDKKMPBase <TDKKMPTaskRepositoryInterface>
- (instancetype)initWithDataSource:(id<TDKKMPTaskDataSourceInterface>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)addTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("addTask(task:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)deleteTaskTaskId:(int64_t)taskId __attribute__((swift_name("deleteTask(taskId:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)getAllTasks __attribute__((swift_name("getAllTasks()")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)updateTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("updateTask(task:)")));
@end

__attribute__((swift_name("DatabaseDriverFactoryInterface")))
@protocol TDKKMPDatabaseDriverFactoryInterface
@required
- (id<TDKKMPRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSDatabaseDriverFactoryImpl")))
@interface TDKKMPIOSDatabaseDriverFactoryImpl : TDKKMPBase <TDKKMPDatabaseDriverFactoryInterface>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<TDKKMPRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalTaskDataSourceImpl")))
@interface TDKKMPLocalTaskDataSourceImpl : TDKKMPBase <TDKKMPTaskDataSourceInterface>
- (instancetype)initWithDriverFactory:(id<TDKKMPDatabaseDriverFactoryInterface>)driverFactory __attribute__((swift_name("init(driverFactory:)"))) __attribute__((objc_designated_initializer));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)deleteTaskTaskId:(int64_t)taskId __attribute__((swift_name("deleteTask(taskId:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)getTasks __attribute__((swift_name("getTasks()")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)saveTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("saveTask(task:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)updateTaskTask:(TDKKMPTask_ *)task __attribute__((swift_name("updateTask(task:)")));
@end

__attribute__((swift_name("ThreadContextProvider")))
@interface TDKKMPThreadContextProvider : TDKKMPBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<TDKKMPKotlinCoroutineContext> io __attribute__((swift_name("io")));
@property (readonly) id<TDKKMPKotlinCoroutineContext> main __attribute__((swift_name("main")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol TDKKMPKoin_coreKoinComponent
@required
- (TDKKMPKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("UseCase")))
@interface TDKKMPUseCase<T, __contravariant Params> : TDKKMPBase <TDKKMPKoin_coreKoinComponent>
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(scope:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)invokeParams:(Params _Nullable)params onError:(void (^)(TDKKMPKotlinThrowable *))onError onSuccess:(void (^)(T _Nullable))onSuccess __attribute__((swift_name("invoke(params:onError:onSuccess:)")));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)runParams:(Params _Nullable)params __attribute__((swift_name("run(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Task_")))
@interface TDKKMPTask_ : TDKKMPBase
- (instancetype)initWithId:(int64_t)id title:(NSString *)title description:(NSString * _Nullable)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:title:description:status:createdAt:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPTask_ *)doCopyId:(int64_t)id title:(NSString *)title description:(NSString * _Nullable)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:title:description:status:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol TDKKMPKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface TDKKMPKotlinEnum<E> : TDKKMPBase <TDKKMPKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TDKKMPKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskStatusEnum")))
@interface TDKKMPTaskStatusEnum : TDKKMPKotlinEnum<TDKKMPTaskStatusEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TDKKMPTaskStatusEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TDKKMPTaskStatusEnum *todo __attribute__((swift_name("todo")));
@property (class, readonly) TDKKMPTaskStatusEnum *inProgress __attribute__((swift_name("inProgress")));
@property (class, readonly) TDKKMPTaskStatusEnum *done __attribute__((swift_name("done")));
+ (TDKKMPKotlinArray<TDKKMPTaskStatusEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TDKKMPTaskStatusEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskStatusEnum.Companion")))
@interface TDKKMPTaskStatusEnumCompanion : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPTaskStatusEnumCompanion *shared __attribute__((swift_name("shared")));
- (TDKKMPTaskStatusEnum *)valueOfValue:(int64_t)value __attribute__((swift_name("valueOf(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TaskModel")))
@interface TDKKMPTaskModel : TDKKMPBase
- (instancetype)initWithId:(int64_t)id title:(NSString *)title description:(NSString * _Nullable)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:title:description:status:createdAt:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPTaskModel *)doCopyId:(int64_t)id title:(NSString *)title description:(NSString * _Nullable)description status:(int64_t)status createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:title:description:status:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddTaskUseCase")))
@interface TDKKMPAddTaskUseCase : TDKKMPUseCase<TDKKMPBoolean *, TDKKMPTask_ *>
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope repository:(id<TDKKMPTaskRepositoryInterface>)repository __attribute__((swift_name("init(scope:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(scope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)runParams:(TDKKMPTask_ * _Nullable)params __attribute__((swift_name("run(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteTaskUseCase")))
@interface TDKKMPDeleteTaskUseCase : TDKKMPUseCase<TDKKMPBoolean *, TDKKMPLong *>
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope repository:(id<TDKKMPTaskRepositoryInterface>)repository __attribute__((swift_name("init(scope:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(scope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)runParams:(TDKKMPLong * _Nullable)params __attribute__((swift_name("run(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTasksUseCase")))
@interface TDKKMPGetTasksUseCase : TDKKMPUseCase<NSArray<TDKKMPTaskModel *> *, TDKKMPKotlinUnit *>
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope repository:(id<TDKKMPTaskRepositoryInterface>)repository __attribute__((swift_name("init(scope:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(scope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)runParams:(TDKKMPKotlinUnit * _Nullable)params __attribute__((swift_name("run(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTaskUseCase")))
@interface TDKKMPUpdateTaskUseCase : TDKKMPUseCase<TDKKMPBoolean *, TDKKMPTask_ *>
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope repository:(id<TDKKMPTaskRepositoryInterface>)repository __attribute__((swift_name("init(scope:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScope:(id<TDKKMPKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("init(scope:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TDKKMPKotlinx_coroutines_coreFlow>)runParams:(TDKKMPTask_ * _Nullable)params __attribute__((swift_name("run(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddTaskIOSHelperUseCase")))
@interface TDKKMPAddTaskIOSHelperUseCase : TDKKMPBase <TDKKMPKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addTaskTask:(TDKKMPTask_ *)task success:(void (^)(TDKKMPBoolean *))success error:(void (^)(TDKKMPKotlinThrowable *))error __attribute__((swift_name("addTask(task:success:error:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteTaskIOSHelperUceCase")))
@interface TDKKMPDeleteTaskIOSHelperUceCase : TDKKMPBase <TDKKMPKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)deleteTaskId:(int64_t)id success:(void (^)(TDKKMPBoolean *))success error:(void (^)(TDKKMPKotlinThrowable *))error __attribute__((swift_name("deleteTask(id:success:error:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTaskIOSHelperUseCase")))
@interface TDKKMPGetTaskIOSHelperUseCase : TDKKMPBase <TDKKMPKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getAllTasksSuccess:(void (^)(NSArray<TDKKMPTaskModel *> *))success error:(void (^)(TDKKMPKotlinThrowable *))error __attribute__((swift_name("getAllTasks(success:error:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTaskIOSHelperUseCase")))
@interface TDKKMPUpdateTaskIOSHelperUseCase : TDKKMPBase <TDKKMPKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)updateTaskTask:(TDKKMPTask_ *)task success:(void (^)(TDKKMPBoolean *))success error:(void (^)(TDKKMPKotlinThrowable *))error __attribute__((swift_name("updateTask(task:success:error:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinHelperKt")))
@interface TDKKMPKoinHelperKt : TDKKMPBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataLocalModuleKt")))
@interface TDKKMPDataLocalModuleKt : TDKKMPBase
@property (class, readonly) TDKKMPKoin_coreModule *dataLocalModule __attribute__((swift_name("dataLocalModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataModuleKt")))
@interface TDKKMPDataModuleKt : TDKKMPBase
@property (class, readonly) TDKKMPKoin_coreModule *dataModule __attribute__((swift_name("dataModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainModuleKt")))
@interface TDKKMPDomainModuleKt : TDKKMPBase
@property (class, readonly) TDKKMPKoin_coreModule *domainModule __attribute__((swift_name("domainModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeModule_iosKt")))
@interface TDKKMPNativeModule_iosKt : TDKKMPBase
@property (class, readonly) TDKKMPKoin_coreModule *platformModule __attribute__((swift_name("platformModule")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol TDKKMPRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol TDKKMPRuntimeTransactionWithoutReturn <TDKKMPRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<TDKKMPRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol TDKKMPRuntimeTransactionWithReturn <TDKKMPRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<TDKKMPRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol TDKKMPRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol TDKKMPRuntimeSqlDriver <TDKKMPRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(TDKKMPKotlinArray<NSString *> *)queryKeys listener:(id<TDKKMPRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (TDKKMPRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<TDKKMPRuntimeQueryResult>)executeIdentifier:(TDKKMPInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<TDKKMPRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<TDKKMPRuntimeQueryResult>)executeQueryIdentifier:(TDKKMPInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<TDKKMPRuntimeQueryResult> (^)(id<TDKKMPRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<TDKKMPRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<TDKKMPRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(TDKKMPKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(TDKKMPKotlinArray<NSString *> *)queryKeys listener:(id<TDKKMPRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol TDKKMPRuntimeSqlSchema
@required
- (id<TDKKMPRuntimeQueryResult>)createDriver:(id<TDKKMPRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<TDKKMPRuntimeQueryResult>)migrateDriver:(id<TDKKMPRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(TDKKMPKotlinArray<TDKKMPRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface TDKKMPKotlinUnit : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface TDKKMPRuntimeTransacterTransaction : TDKKMPBase <TDKKMPRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<TDKKMPRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TDKKMPRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface TDKKMPKotlinThrowable : TDKKMPBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (TDKKMPKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TDKKMPKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface TDKKMPRuntimeExecutableQuery<__covariant RowType> : TDKKMPBase
- (instancetype)initWithMapper:(RowType (^)(id<TDKKMPRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<TDKKMPRuntimeQueryResult>)executeMapper:(id<TDKKMPRuntimeQueryResult> (^)(id<TDKKMPRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<TDKKMPRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface TDKKMPRuntimeQuery<__covariant RowType> : TDKKMPRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<TDKKMPRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<TDKKMPRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<TDKKMPRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol TDKKMPKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TDKKMPKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TDKKMPKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TDKKMPKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TDKKMPKotlinCoroutineContextElement> _Nullable)getKey:(id<TDKKMPKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TDKKMPKotlinCoroutineContext>)minusKeyKey:(id<TDKKMPKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TDKKMPKotlinCoroutineContext>)plusContext:(id<TDKKMPKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface TDKKMPKoin_coreKoin : TDKKMPBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (TDKKMPKoin_coreScope *)createScopeT:(id<TDKKMPKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (TDKKMPKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (TDKKMPKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (TDKKMPKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<TDKKMPKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<TDKKMPKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (TDKKMPKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (TDKKMPKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<TDKKMPKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (TDKKMPKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (TDKKMPKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<TDKKMPKotlinLazy>)injectQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier mode:(TDKKMPKotlinLazyThreadSafetyMode *)mode parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<TDKKMPKotlinLazy>)injectOrNullQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier mode:(TDKKMPKotlinLazyThreadSafetyMode *)mode parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<TDKKMPKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(TDKKMPKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<TDKKMPKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) TDKKMPKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) TDKKMPKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) TDKKMPKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) TDKKMPKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) TDKKMPKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol TDKKMPKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<TDKKMPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface TDKKMPKotlinEnumCompanion : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TDKKMPKotlinArray<T> : TDKKMPBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TDKKMPInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TDKKMPKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface TDKKMPKoin_coreModule : TDKKMPBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (TDKKMPKoin_coreKoinDefinition<id> *)factoryQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(TDKKMPKotlinArray<TDKKMPKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(TDKKMPKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(TDKKMPKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<TDKKMPKoin_coreModule *> *)plusModules:(NSArray<TDKKMPKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<TDKKMPKoin_coreModule *> *)plusModule:(TDKKMPKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(TDKKMPKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(TDKKMPKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<TDKKMPKoin_coreQualifier>)qualifier scopeSet:(void (^)(TDKKMPKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (TDKKMPKoin_coreKoinDefinition<id> *)singleQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) TDKKMPMutableSet<TDKKMPKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<TDKKMPKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) TDKKMPMutableDictionary<NSString *, TDKKMPKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol TDKKMPRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol TDKKMPRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol TDKKMPRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(TDKKMPBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(TDKKMPKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(TDKKMPDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(TDKKMPLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol TDKKMPRuntimeSqlCursor
@required
- (TDKKMPBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (TDKKMPKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (TDKKMPDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (TDKKMPLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<TDKKMPRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface TDKKMPRuntimeAfterVersion : TDKKMPBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<TDKKMPRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<TDKKMPRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((swift_name("KotlinException")))
@interface TDKKMPKotlinException : TDKKMPKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface TDKKMPKotlinRuntimeException : TDKKMPKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TDKKMPKotlinIllegalStateException : TDKKMPKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface TDKKMPKotlinCancellationException : TDKKMPKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TDKKMPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol TDKKMPKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TDKKMPKotlinCoroutineContextElement <TDKKMPKotlinCoroutineContext>
@required
@property (readonly) id<TDKKMPKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TDKKMPKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface TDKKMPKoin_coreLockable : TDKKMPBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface TDKKMPKoin_coreScope : TDKKMPKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<TDKKMPKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(TDKKMPKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<TDKKMPKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<TDKKMPKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (TDKKMPKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (TDKKMPKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<TDKKMPKotlinLazy>)injectQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier mode:(TDKKMPKotlinLazyThreadSafetyMode *)mode parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<TDKKMPKotlinLazy>)injectOrNullQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier mode:(TDKKMPKotlinLazyThreadSafetyMode *)mode parameters:(TDKKMPKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(TDKKMPKotlinArray<TDKKMPKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<TDKKMPKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(TDKKMPKotlinArray<TDKKMPKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) TDKKMPKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<TDKKMPKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol TDKKMPKoin_coreKoinScopeComponent <TDKKMPKoin_coreKoinComponent>
@required
@property (readonly) TDKKMPKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol TDKKMPKoin_coreQualifier
@required
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TDKKMPKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TDKKMPKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol TDKKMPKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol TDKKMPKotlinKClass <TDKKMPKotlinKDeclarationContainer, TDKKMPKotlinKAnnotatedElement, TDKKMPKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface TDKKMPKoin_coreParametersHolder : TDKKMPBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(TDKKMPBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<TDKKMPKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<TDKKMPKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (TDKKMPKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) TDKKMPBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol TDKKMPKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface TDKKMPKotlinLazyThreadSafetyMode : TDKKMPKotlinEnum<TDKKMPKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TDKKMPKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) TDKKMPKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) TDKKMPKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (TDKKMPKotlinArray<TDKKMPKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TDKKMPKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface TDKKMPKoin_coreLogger : TDKKMPBase
- (instancetype)initWithLevel:(TDKKMPKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(TDKKMPKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(TDKKMPKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(TDKKMPKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(TDKKMPKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property TDKKMPKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface TDKKMPKoin_coreExtensionManager : TDKKMPBase
- (instancetype)initWith_koin:(TDKKMPKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<TDKKMPKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<TDKKMPKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<TDKKMPKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface TDKKMPKoin_coreInstanceRegistry : TDKKMPBase
- (instancetype)initWith_koin:(TDKKMPKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(TDKKMPKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) TDKKMPKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, TDKKMPKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface TDKKMPKoin_corePropertyRegistry : TDKKMPBase
- (instancetype)initWith_koin:(TDKKMPKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface TDKKMPKoin_coreScopeRegistry : TDKKMPBase
- (instancetype)initWith_koin:(TDKKMPKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TDKKMPKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<TDKKMPKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) TDKKMPKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<TDKKMPKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol TDKKMPKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface TDKKMPKoin_coreKoinDefinition<R> : TDKKMPBase
- (instancetype)initWithModule:(TDKKMPKoin_coreModule *)module factory:(TDKKMPKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPKoin_coreKoinDefinition<R> *)doCopyModule:(TDKKMPKoin_coreModule *)module factory:(TDKKMPKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TDKKMPKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) TDKKMPKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface TDKKMPKoin_coreInstanceFactory<T> : TDKKMPKoin_coreLockable
- (instancetype)initWithBeanDefinition:(TDKKMPKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) TDKKMPKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(TDKKMPKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(TDKKMPKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(TDKKMPKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(TDKKMPKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) TDKKMPKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface TDKKMPKoin_coreSingleInstanceFactory<T> : TDKKMPKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(TDKKMPKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(TDKKMPKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(TDKKMPKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(TDKKMPKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(TDKKMPKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface TDKKMPKoin_coreScopeDSL : TDKKMPBase
- (instancetype)initWithScopeQualifier:(id<TDKKMPKoin_coreQualifier>)scopeQualifier module:(TDKKMPKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPKoin_coreKoinDefinition<id> *)factoryQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (TDKKMPKoin_coreKoinDefinition<id> *)scopedQualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) TDKKMPKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<TDKKMPKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface TDKKMPKotlinByteArray : TDKKMPBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(TDKKMPByte *(^)(TDKKMPInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (TDKKMPKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol TDKKMPKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(TDKKMPKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface TDKKMPKoin_coreLevel : TDKKMPKotlinEnum<TDKKMPKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TDKKMPKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) TDKKMPKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) TDKKMPKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) TDKKMPKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) TDKKMPKoin_coreLevel *none __attribute__((swift_name("none")));
+ (TDKKMPKotlinArray<TDKKMPKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TDKKMPKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol TDKKMPKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(TDKKMPKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface TDKKMPKoin_coreScopeRegistryCompanion : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface TDKKMPKoin_coreBeanDefinition<T> : TDKKMPBase
- (instancetype)initWithScopeQualifier:(id<TDKKMPKoin_coreQualifier>)scopeQualifier primaryType:(id<TDKKMPKotlinKClass>)primaryType qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *))definition kind:(TDKKMPKoin_coreKind *)kind secondaryTypes:(NSArray<id<TDKKMPKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<TDKKMPKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<TDKKMPKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property TDKKMPKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(TDKKMPKoin_coreScope *, TDKKMPKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) TDKKMPKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<TDKKMPKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<TDKKMPKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<TDKKMPKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<TDKKMPKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface TDKKMPKoin_coreInstanceFactoryCompanion : TDKKMPBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TDKKMPKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface TDKKMPKoin_coreResolutionContext : TDKKMPBase
- (instancetype)initWithLogger:(TDKKMPKoin_coreLogger *)logger scope:(TDKKMPKoin_coreScope *)scope clazz:(id<TDKKMPKotlinKClass>)clazz qualifier:(id<TDKKMPKoin_coreQualifier> _Nullable)qualifier parameters:(TDKKMPKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TDKKMPKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) TDKKMPKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) TDKKMPKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<TDKKMPKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) TDKKMPKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface TDKKMPKotlinByteIterator : TDKKMPBase <TDKKMPKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TDKKMPByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface TDKKMPKoin_coreKind : TDKKMPKotlinEnum<TDKKMPKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TDKKMPKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) TDKKMPKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) TDKKMPKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (TDKKMPKotlinArray<TDKKMPKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<TDKKMPKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface TDKKMPKoin_coreCallbacks<T> : TDKKMPBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (TDKKMPKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
