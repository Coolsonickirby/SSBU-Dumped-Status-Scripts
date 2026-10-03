
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016280(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_FLAG_ATTACK_FALL_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  else {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__enable_energy_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      goto LAB_710001637c;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
LAB_710001637c:
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = app::lua_bind::AttackModule__is_infliction_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0x7f);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::AttackModule__clear_inflict_kind_status_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

