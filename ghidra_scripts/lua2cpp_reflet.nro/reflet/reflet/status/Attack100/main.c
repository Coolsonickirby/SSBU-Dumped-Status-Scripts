
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterReflet::status::Attack100_main(L2CFighterReflet *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  Fighter *pFVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  FighterModuleAccessor *pFVar8;
  ulong uVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  pvVar4 = (void *)app::sv_system::battle_object(this->luaStateAgent);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_MAGIC_KIND_EL_WIND);
  pFVar5 = (Fighter *)lib::L2CValue::as_pointer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::FighterSpecializer_Reflet::change_hud_kind(pFVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_MAGIC_KIND_EL_WIND);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE);
    pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::FighterSpecializer_Reflet::set_flag_to_table(pFVar8,iVar2,(bool)(bVar1 & 1),iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_MAGIC_KIND_EL_WIND);
  pFVar8 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Reflet::change_grimoire(pFVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x1f323ddda1);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar9 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_REFLET_STATUS_ATTACK_INT_COUNT_FOR_ATTACK_100);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_status_Attack100_common(this);
  lib::L2CValue::L2CValue(aLStack96,Attack100_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

