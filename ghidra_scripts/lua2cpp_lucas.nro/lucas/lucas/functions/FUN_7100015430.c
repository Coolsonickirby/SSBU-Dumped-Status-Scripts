
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015430(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100015588;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_STOP_Y_TIME);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_STOP_Y_TIME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
LAB_7100015560:
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__unable_energy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  }
  else {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) goto LAB_7100015560;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__enable_energy_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack64);
LAB_7100015588:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

