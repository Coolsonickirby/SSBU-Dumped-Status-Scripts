
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::Damage_main_loop(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  BattleObjectModuleAccessor *pBVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DAMAGE_INT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_LINK_NO_ARTICLE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar1,true);
    lib::L2CValue::L2CValue(aLStack80,uVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar4);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(pBVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_SPECIAL_LW_VARIOUS_KIND_PUNCH_R_3);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xb616c555c);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::VisibilityModule__set_default_int64_impl(pBVar5,lVar6);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack128,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  return;
}

