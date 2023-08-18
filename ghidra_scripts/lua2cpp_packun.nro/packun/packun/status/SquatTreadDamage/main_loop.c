
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SquatTreadDamage_main_loop(L2CFighterPackun *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  Hash40 HVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_PACKUN_STATUS_SQUAT_TREAD_DAMAGE_WORK_INT_TREAD_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                    (LUA_SCRIPT_LINE_SYSTEM_POST,uVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar5);
    }
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack128,HVar7);
    lib::L2CValue::L2CValue(aLStack80,0xb38c9ab48);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_STATUS_SQUAT_TREAD_DAMAGE_FLAG_JUMP_MINI);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_STATUS_KIND_SQUAT_TREAD_DAMAGE_RV);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000211dc;
    }
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar8 = lib::L2CValue::operator__(pLVar9,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_71000211dc:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

