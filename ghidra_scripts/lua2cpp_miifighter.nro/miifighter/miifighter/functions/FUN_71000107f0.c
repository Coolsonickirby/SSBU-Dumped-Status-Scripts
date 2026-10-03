
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000107f0(L2CFighterMiifighter *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_WORK_INT_FALL_HIT_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar6 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) != 0) goto LAB_7100010af4;
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                    (LUA_SCRIPT_LINE_STATUS_SYSTEM,uVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) goto LAB_7100010af4;
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar7);
  }
  pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(pBVar8);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DAMAGE_FLY_ROLL);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) goto LAB_7100010974;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) != 0) goto LAB_7100010974;
  }
  else {
LAB_7100010974:
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP_BUTTON);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_CEIL);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_FB);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_KUIUCHI_HEAD_WORK_INT_FALL_HIT_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100010af4:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

