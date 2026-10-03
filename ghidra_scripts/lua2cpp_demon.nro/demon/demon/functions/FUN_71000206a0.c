
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000206a0(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_X);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_Y);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  pLVar4 = (L2CValue *)(param_1 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_SPECIAL_LW_GROUND);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack112,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
      FUN_710001f3f0(param_1);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SWIM_DIVE);
  uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__clear_speed_attr_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  FUN_71000208d0(param_1);
  return;
}

