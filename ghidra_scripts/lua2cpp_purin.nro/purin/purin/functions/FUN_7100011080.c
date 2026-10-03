
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011080(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack128;
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),3);
  uVar2 = lib::L2CValue::as_integer(this);
  uVar2 = app::sv_battle_object::kind(uVar2);
  lib::L2CValue::L2CValue(aLStack80,uVar2);
  app::lua_bind::AttackModule__clear_all_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KIND_KIRBY);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_END);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    this_00 = aLStack96;
  }
  lib::L2CValue::~L2CValue(this_00);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

