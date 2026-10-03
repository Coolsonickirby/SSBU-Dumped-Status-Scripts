
void FUN_710003cb50(undefined8 param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  plVar1 = (long *)lib::L2CValue::as_inner_function(param_2);
  lib::L2CValue::L2CValue(aLStack144,param_3);
  lib::L2CValue::L2CValue(aLStack160,param_4);
  lib::L2CValue::L2CValue(aLStack176,param_5);
  lib::L2CValue::L2CValue(aLStack192,param_6);
  lVar4 = *plVar1;
  lib::L2CValue::L2CValue(aLStack80,aLStack144);
  lib::L2CValue::L2CValue(aLStack96,aLStack160);
  lib::L2CValue::L2CValue(aLStack112,aLStack176);
  lib::L2CValue::L2CValue(aLStack128,aLStack192);
  plVar1 = *(long **)(lVar4 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,aLStack80,aLStack96,aLStack112,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    return;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = &PTR_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_7100157398;
  uVar3 = __cxa_throw(puVar2,&PTR_STATUS_KIND_NONE_71001573b0,
                      std::exception::FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  do {
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    uVar3 = _Unwind_Resume(uVar3);
  } while( true );
}

