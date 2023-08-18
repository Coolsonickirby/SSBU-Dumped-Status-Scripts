
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialHi13_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *this_00;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_INT_TENCHI_KICK_FALL_HIT_OBJECT_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x50000000);
      uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                          (LUA_SCRIPT_LINE_STATUS_SYSTEM,uVar4);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar1 & 1U) != 0) {
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
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DAMAGE_FLY_ROLL);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar6 & 1) != 0) goto LAB_710003c8c4;
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR);
            uVar6 = lib::L2CValue::operator__(aLStack112,aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((uVar6 & 1) != 0) goto LAB_710003c8c4;
          }
          else {
LAB_710003c8c4:
            lib::L2CValue::L2CValue
                      (aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP_BUTTON);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL_JUMP);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_WALL);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_CEIL);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE_FB);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_TERM_ID_PASSIVE);
            iVar3 = lib::L2CValue::as_integer(aLStack64);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
            app::lua_bind::WorkModule__unable_transition_term_impl(pBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack64);
          }
          lib::L2CValue::L2CValue(aLStack64,0x50000000);
          lib::L2CValue::L2CValue
                    (aLStack128,
                     _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_INT_TENCHI_KICK_FALL_HIT_OBJECT_ID);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar5 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
      lib::L2CValue::_L2CValue(aLStack80);
      iVar3 = 0;
      goto LAB_710003ca54;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_HI1_4);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  iVar3 = 1;
LAB_710003ca54:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

