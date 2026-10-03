
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b190(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_SONIC_STATUS_SPECIAL_S_HOLD_JUMP_WORK_FLOAT_ADVANCE_COUNTER);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack192,0x1a806d082d);
  uVar2 = lib::L2CValue::as_integer(aLStack176);
  uVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::operator/(aLStack80,aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::operator+(aLStack112,aLStack144);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SONIC_STATUS_SPECIAL_S_HOLD_JUMP_WORK_FLOAT_ADVANCE_COUNTER);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x189023d019);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar2 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SONIC_STATUS_SPECIAL_S_HOLD_JUMP_FLAG_MAX_CHARGE);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

