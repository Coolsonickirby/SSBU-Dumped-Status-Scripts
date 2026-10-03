
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100048890(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_INT_STRENGTH);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_COMMON_FLAG_COMMAND);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STRENGTH_W);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STRENGTH_M);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xf37995dbf);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xfcd9660dc);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack128,0xf30f499a6);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::operator=(param_1,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack144,0x19146335ae);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::operator*(param_1,aLStack112);
    lib::L2CValue::operator=(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

