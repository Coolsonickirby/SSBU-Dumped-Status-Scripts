
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003a8e0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_MIISWORDSMAN_STATUS_RAPID_SLASH_WORK_INT_CHARGE_COUNT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x13ab31ef2e);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack48,fVar4);
  lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0xeb00da060);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator/(aLStack48,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack48,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x172dc57a3a);
  uVar2 = lib::L2CValue::as_integer(aLStack48);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::operator/(aLStack64,aLStack80);
  lib::L2CValue::L2CValue(aLStack48,1.0);
  lib::L2CValue::operator-(aLStack48,aLStack128);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::operator*(aLStack96,aLStack176);
  lib::L2CValue::operator*(aLStack112,aLStack128);
  lib::L2CValue::operator+(aLStack160,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  fVar4 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::AttackModule__set_power_mul_status_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

