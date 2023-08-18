
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::SpecialLw_main(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  Fighter *pFVar5;
  long lVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pvVar4 = (void *)app::sv_system::battle_object(this->luaStateAgent);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_MAGIC_KIND_RIZAIA);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Reflet::change_hud_kind(pFVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_RIZAIA);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_LAST_USED_MAGIC_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x10ef97f71f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_GROUND);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x146e22785f);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_MOTION_KIND_AIR);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_REFLET_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_REFLET_SPECIAL_AIR_LW);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_KINETIC_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_GROUND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_COMMON_INT_CORRECT_AIR);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x50000000);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_SPECIAL_LW_CAPTURE_INT_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AttackModule__set_overlap_hit_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_SPECIAL_FAILURE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_RIZAIA);
    pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Reflet::change_grimoire(pFVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) goto LAB_7100016f5c;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_RIZAIA);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
    pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::FighterSpecializer_Reflet::set_flag_to_table(pFVar9,iVar2,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_INSTANCE_WORK_ID_FLAG_SPECIAL_FAILURE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100016f5c:
  lib::L2CValue::L2CValue(aLStack80,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

