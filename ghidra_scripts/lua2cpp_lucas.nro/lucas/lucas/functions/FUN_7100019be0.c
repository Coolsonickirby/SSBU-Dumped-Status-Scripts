
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019be0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_STOP_Y_TIME);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LUCAS_STATUS_SPECIAL_HI_WORK_INT_STOP_Y_TIME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::KineticModule__enable_energy_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      goto LAB_7100019d7c;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::KineticModule__unable_energy_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
LAB_7100019d7c:
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

