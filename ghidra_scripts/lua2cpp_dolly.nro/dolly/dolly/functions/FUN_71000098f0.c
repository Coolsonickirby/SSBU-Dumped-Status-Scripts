
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000098f0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack80,0xd07d69a9b);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(param_1,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0x19146335ae);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::operator*(param_1,aLStack80);
    lib::L2CValue::operator=(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

