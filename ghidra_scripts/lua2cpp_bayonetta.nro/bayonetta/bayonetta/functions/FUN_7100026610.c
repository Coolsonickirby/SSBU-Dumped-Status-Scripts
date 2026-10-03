
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100026610(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_INT_SPECIAL_HI_USED_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,1);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,2);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100026944;
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AFTER_ACTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x15f0e5f855);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x11f7a7bec7);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_AFTER_ACTION);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x11d8384838);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100026944:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

