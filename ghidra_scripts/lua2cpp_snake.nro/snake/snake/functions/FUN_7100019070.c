
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019070(void *param_1)

{
  int iVar1;
  GroundCorrectKind GVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::KineticModule__change_kinetic_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xc0);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack48,GROUND_CORRECT_KIND_GROUND);
  GVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar2);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

