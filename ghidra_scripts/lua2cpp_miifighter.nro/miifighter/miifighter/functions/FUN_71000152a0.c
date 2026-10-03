
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000152a0(void *param_1)

{
  WorkKind WVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0x16);
  lib::L2CValue::operator=(aLStack80,pLVar4);
  lib::L2CValue::L2CValue(aLStack64,_WORK_KIND_STATUS_WORK);
  WVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__clear_all_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),WVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG1);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG2);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,GROUND_CORRECT_KIND_AIR);
  GVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__correct_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),GVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG_FROM_GR);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    FUN_71000154c0(param_1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_FLAG_FROM_GR);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

